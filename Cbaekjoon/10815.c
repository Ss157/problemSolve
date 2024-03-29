#include <stdio.h>
int Narr[500000], Marr[500000];

void quickSort(int arr[], int L, int R){
    int left = L, right = R;
    int pivot = arr[(L + R) / 2];//?pivot?설정?(가운데)?
    int temp;
    do
    {
    while(arr[left] < pivot)//?left가?pivot보다?큰?값을?만나거나?pivot을?만날?때까지?
        left++;
        while(arr[right] > pivot)//?right가?pivot보다?작은?값을?만나거나?pivot을?만날?때까지?
            right--;
        if(left <= right)//?left가?right보다?왼쪽에?있다면?교환?
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            /*left?오른쪽으로?한칸,?right?왼쪽으로?한칸?이동*/
            left++;
            right--;
        }
    }while(left<=right);//?left가?right?보다?오른쪽에?있을?때까지?반복?
    /*?recursion?*/
    if(L<right)
        quickSort(arr, L, right);//?왼쪽?배열?재귀적으로?반복?
    if(left < R)
        quickSort(arr, left, R);//?오른쪽?배열?재귀적으로?반복?
}

int binary_searching(int arr[], int target, int start, int end){
    if(start > end){
        return 0;
    }
    int med = (start + end) / 2;

    if(arr[med] == target){
        return 1;
    }
    else if(arr[med] < target){
        return binary_searching(arr, target, med + 1, end);
    }
    else{
        return binary_searching(arr, target, start, med - 1);
    }
}

int main(void){
    int N = 0, M = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &Narr[i]);
    }
    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &Marr[i]);
    }

    quickSort(Narr, 0, N - 1);
    //quickSort(Marr, 0, M - 1);

    for(int i = 0; i < M; i++){
        int a = binary_searching(Narr, Marr[i], 0, N - 1);
        printf("%d ", a);
    }
}