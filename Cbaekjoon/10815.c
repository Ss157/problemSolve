#include <stdio.h>
int Narr[500000], Marr[500000];

void quickSort(int arr[], int L, int R){
    int left = L, right = R;
    int pivot = arr[(L + R) / 2];//?pivot?����?(���)?
    int temp;
    do
    {
    while(arr[left] < pivot)//?left��?pivot����?ū?����?�����ų�?pivot��?����?������?
        left++;
        while(arr[right] > pivot)//?right��?pivot����?����?����?�����ų�?pivot��?����?������?
            right--;
        if(left <= right)//?left��?right����?���ʿ�?�ִٸ�?��ȯ?
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            /*left?����������?��ĭ,?right?��������?��ĭ?�̵�*/
            left++;
            right--;
        }
    }while(left<=right);//?left��?right?����?�����ʿ�?����?������?�ݺ�?
    /*?recursion?*/
    if(L<right)
        quickSort(arr, L, right);//?����?�迭?���������?�ݺ�?
    if(left < R)
        quickSort(arr, left, R);//?������?�迭?���������?�ݺ�?
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