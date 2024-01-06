#include <stdio.h>

int tmp[500000], K = 0, temp = 0, A_K = -1;
void merge(int A[], int p, int q, int r){
    int i, j, t; 
    i = p; j = q + 1; t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j])
            tmp[t++] = A[i++];
        else 
            tmp[t++] = A[j++];
    }
    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p; t = 1;
    while (i <= r){
        A[i++] = tmp[t]; 
        temp++;
        if(temp == K){
            A_K = tmp[t];
        }
        t++;
    }
}

void merge_sort(int A[], int p, int r) {
    if (p < r){
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main(void){
    int N , A[500001];
    scanf("%d %d", &N, &K);
    for(int i = 1; i < N + 1; i++){
        scanf("%d", &A[i]);
    }
    merge_sort(A, 1, N);
    printf("%d", A_K);
}