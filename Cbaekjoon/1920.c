#include <stdio.h>
#include <stdlib.h>
int arr[100000] = {0}, arr2[100000] = {0}, temp[100000] = {0};

int BST(int arr[], int key, int arr_size){
    int front, rear, pivot;
	front = 0;
	rear = arr_size - 1;
    
	while (1) {
		pivot = (front + rear) / 2;
		if (arr[pivot] == key) return 1;
		if (arr[front] == key) return 1;
		if (arr[rear] == key) return 1;

		if (arr[pivot] < key)
			front = pivot + 1;
		else
			rear = pivot - 1;
            
		if (front >= rear)
			return 0;
	}
}

int compare(const void* a, const void* b) {
	return *(int*)a > * (int*)b ? 1 : (*(int*)a < *(int*)b ? -1 : 0);
}

int main(void){
    int N, M;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &arr2[i]);
    }
    qsort(arr, N, sizeof(int), compare);

    for(int i = 0; i < M; i++){
        printf("%d\n", BST(arr, arr2[i], N));
    }
}