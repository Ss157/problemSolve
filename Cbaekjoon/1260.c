#include <stdio.h>
int arr[1001][1001], visited_BFS[1001], visited_DFS[1001], queue[1000];
int N, M, V, a, b;

void DFS(int V, int N){
    visited_DFS[V] = 1;
    printf("%d ", V);
    for(int w = 1; w <= N; w++){
        if(arr[V][w] == 1 && visited_DFS[w] == 0){
            visited_DFS[w] = 1;
            DFS(w, N);
        }
    }
}

void BFS(int V, int N){
    int front, rear, pop;
    visited_BFS[V] = 1;
    printf("%d ", V);
    queue[0] = V;
    front = 0, rear = 1;
    while(rear - front != 0){
        pop = queue[front++];
        for (int w = 1; w <= N; w++)
        {
            if (arr[pop][w] == 1 && visited_BFS[w] == 0)
            {
                queue[rear++] = w;
                visited_BFS[w] = 1;
                printf("%d ", w);
            }
        }
    }
}
int main(void){
    scanf("%d %d %d", &N, &M, &V);

    for(int i = 0; i < M; i++){
        scanf("%d %d", &a, &b);
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    DFS(V, N);
    printf("\n");
    BFS(V, N);
}