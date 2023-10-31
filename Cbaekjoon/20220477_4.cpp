#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <algorithm>

using namespace std;

int A[1000];

const int ASIZE = 20;

void heapify(int A[], int k, int n)
{
    int left = 2 * k;
    int right = 2 * k + 1;
    int smaller;
    if (right <= n)
    {
        if (A[left] < A[right])
        {
            smaller = left;
        }
        else
        {
            smaller = right;
        }
    }
    else if (left <= n)
    {
        smaller = left;
    }
    else
    {
        return;
    }

    if (A[smaller] < A[k])
    {
        int tmp = A[k];
        A[k] = A[smaller];
        A[smaller] = tmp;
        heapify(A, smaller, n);
    }
}

void buildHeap(int A[], int n)
{
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(A, i, n);
    }
}

int heapSort(int A[], int n)
{
    buildHeap(A, n);
    // for(int i = 1; i <= n; i++){
    //     printf("%d ", A[i]);
    // }
    // printf("\n");
    // printf("%d\n", n);
    // printf("---------------\n");
    for (int i = n; i >= 2; i--)
    {
        // for(int j = n; j >= 1; j--){
        //     printf("%d ", A[j]);
        // }
        // printf("\n");
        int tmp = A[1];
        A[1] = A[i];
        A[i] = tmp;
        heapify(A, 1, i - 1);
    }

    // printf("---------------\n");
    // for(int i = 1; i <= n; i++){
    //     printf("%d ", A[i]);
    // }
    // printf("\n");
    return A[n / 2];
}

void getMidArray(int med_arr[], int data[][6], int index, int amount)
{
    if (index == amount)
    {
        return;
    }

    int len = sizeof(data[index]) / sizeof(int) - 1;
    printf("%d\n", len);
    med_arr[index] = heapSort(data[index], len);
    for (int i = 5; i >= 1; i--)
    {
        printf("%d ", data[index][i]);
    }
    printf("\n%d\n", med_arr[index]);
    getMidArray(med_arr, data, index + 1, amount);

    // for (int i = 0; i < amount; i++) {
    //     int len = sizeof(divided_arrays[i]) / sizeof(int) - 1;
    //     med_arr[i] = heapSort(divided_arrays[i], len);
    // }
}

// A에서 마지막 원소가 몇번째 크기인지
int partition(int A[], int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i++;
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    int tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;

    return i + 1;
}

// 평균 선형 시간 선택 알고리즘
int select(int A[], int p, int r, int i)
{
    if (p == r)
    {
        return A[p];
    }
    int q = partition(A, p, r);
    int k = q - p + 1;
    if (i < k)
    {
        return select(A, p, q - 1, i);
    }
    else if (i == k)
    {
        return A[q];
    }
    else
    {
        return select(A, q + 1, r, i - k);
    }
}

void printA()
{
    printf("printA:\n");
    for (int i = 0; i < ASIZE; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int linearSelect(int A[], int p, int r, int index, int type)
{
    int dist = r - p;
    int amount = dist / 5;

    // printf("index: %d %d, s,e: %d %d\n", index, type, p, r);

    // printf("type: %d\n", type);
    // printA();

    // 1
    if (dist <= 4)
    {
        // printf("dist 5\n");
        int result = select(A, p, r, index);
        return result;
    }

    // 2
    int divided_arrays[200][6] = {0};
    for (int i = 0; i < amount; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            divided_arrays[i][j + 1] = A[i * 5 + j];
        }
    }

    // 3
    int med_arr[200] = {0};

    for (int i = 0; i < amount; i++)
    {
        int len = sizeof(divided_arrays[i]) / sizeof(int) - 1;
        med_arr[i] = heapSort(divided_arrays[i], len);
    }

    // 4
    int M = heapSort(med_arr, amount);

    // 5
    int temp_index;
    for (int i = 0; i < ASIZE; i++)
    {
        if (M == A[i])
        {
            temp_index = i;
            break;
        }
    }

    int temp = A[temp_index];
    A[temp_index] = A[r];
    A[r] = temp;
    int q = partition(A, p, r);

    // printf("q: %d\n", q);

    // 6
    int ret = A[q];
    if (index < q)
    {
        ret = linearSelect(A, p, q - 1, index, 0);
    }
    else if (index > q)
    {
        ret = linearSelect(A, q + 1, r, index - q, 1);
    }

    // printf("ret: %d\n", ret);
    return ret;
}

int main(void)
{
    srand(time(NULL));
    int repeat_num = 100;
    int select_linearSelect = 1;
    if (select_linearSelect == 0)
    {
        printf("평균 선형 시간 선택 알고리즘 호출\n");
    }
    else
    {
        printf("최악의 경우 선형시간 선택 알고리즘 호출\n");
    }

    for (int j = 0; j < ASIZE; j++)
    {
        A[j] = rand() + 1;
    }
    // printA();

    int a;
    // for(int k = 0; k < 500; k++){
    //     select(A, 0, 1000, k + 1);
    // }
    for (int k = 0; k < ASIZE; k++)
    {
        a = linearSelect(A, 0, ASIZE -1, k, -1);
        printA();
        printf("k, a: %d %d\n\n", k, a);
    }

// // a = linearSelect(A, 0, ASIZE - 1, 1, -1);
// // a = linearSelect(A, 0, ASIZE - 1, 2, -1);
// //     a = linearSelect(A, 0, ASIZE - 1, 3, -1);
// //         printA();
// //         printf("k, a: %d\n\n", a);

    sort(A, A + ASIZE);
    printf("sort ");
    printA();

    // for(int repeat_num = 10; repeat_num <= 100; repeat_num += 10){
    //     clock_t start = clock();
    //     printf("반복 횟수 : %d회\n", repeat_num);
    //     for(int i = 0; i < repeat_num; i++){
    //         for(int j = 0; j < ASIZE; j++){
    //             A[j] = rand() + 1;
    //         }
    //         int a;
    //         // for(int k = 0; k < 500; k++){
    //         //     select(A, 0, 1000, k + 1);
    //         // }
    //         for(int k = 0; k < ASIZE/2; k++){
    //             a = linearSelect(A, 0, ASIZE-1, k + 1, -1);
    //             printf("%d %d\n", k, a);
    //         }
    //     }
    //     clock_t end = clock();
    //     printf("걸린 시간(초) : %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    // }
}