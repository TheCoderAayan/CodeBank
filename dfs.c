#include <stdio.h>
#include <stdlib.h>

#define MAX 100  


typedef struct {
    int items[MAX];
    int top;
} Stack;


void initStack(Stack *s) {
    s->top = -1;
}


int isEmpty(Stack *s) {
    return s->top == -1;
}


void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = value;
}


int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[(s->top)--];
}


void DFS(int A[MAX][MAX], int start, int n) {
    Stack s;
    initStack(&s);
    
    
    int visited[MAX] = {0};

    
    push(&s, start);
    visited[start] = 1;

    
    while (!isEmpty(&s)) {
        int v = pop(&s); 
        int j;
        printf("Visited node: %d\n", v);

       
        for (j = 0; j < n; j++) {
            if (v != j && A[v][j] != 0 && visited[j] == 0) {
                visited[j] = 1;  
                push(&s, j);    
               visited[j] = 1;  
            }
        }
    }
}

int main() {
    int n, start;
    int A[MAX][MAX];
int i;
 int j ;   
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

   
    printf("Enter the adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++) {
        for (j= 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter the start node for DFS: ");
    scanf("%d", &start);

 
    printf("Depth First Search starting from node %d:\n", start);
    DFS(A, start, n);

    return 0;
}
