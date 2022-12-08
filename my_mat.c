#include <stdio.h>
#include "my_mat.h"
#include<malloc.h>
int **Enter_mat(){
    int x ;
    int **new_matrix;
    new_matrix = malloc(sizeof(int *) * 10);
    for (size_t i = 0; i < 10; i++)
    {
        new_matrix[i] = malloc(sizeof(int *) * 10);
    }
    printf("Enter your matrix \n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Enter The Number in mat[%d][%d]:", i, j);
            scanf("%d", &x);
            new_matrix[i][j] = x;
        }
}
    return new_matrix;
}

int **Floyd_min_path(int **mat){
    int **dist;
        dist = malloc(sizeof(int *) * 10);
    for (size_t i = 0; i < 10; i++){
        dist[i] = malloc(sizeof(int *) * 10);
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            dist[i][j] = mat[i][j];
        }
    }

    for (int i = 0; i < 10; i++){
    dist[i][i] = 0;
    }

    for (int k = 0; k < 10; k++){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                if (dist[i][j]>dist[i][k]+dist[k][j])
                {
                dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    return dist;
}
void There_is_path(int **mat){
    int start, end;
    printf("Enter The first Node: \n ");
    scanf("%d", &start);
    printf("Enter The last Node : \n");
    scanf("%d", &end);
    if (mat[start][end] > 0)
    {
        printf("True \n");
    }
    else
    {
    printf("False\n");
    }
}
void Print_The_Path(int **mat){
    int start, end;
    printf("Enter The first Node: \n ");
    scanf("%d", &start);
    printf("Enter The last Node : \n");
    scanf("%d", &end);
        if(mat[start][end]==0){
            printf("-1\n");
        }
        else
        {
            printf("%d\n", mat[start][end]);
        }
}

