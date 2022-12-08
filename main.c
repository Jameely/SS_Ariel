#include <stdio.h>
#include "my_mat.h"
int main(){
    char option = 'Z';
    while (option != 'D')
    {
        int **mat;
            mat = malloc(sizeof(int *) * 10);
    for (size_t i = 0; i < 10; i++)
    {
        mat[i] = malloc(sizeof(int *) * 10);
    }
        printf("Please choose An option (A,B,C,D) \n");
        scanf("%c", &option);
        if (option == 'A'){
        int **dist = Enter_mat();
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                mat[i][j] = dist[i][j];
            }
        }
        }
            if (option == 'B'){
            There_is_path(Floyd_min_path(mat));
            }

            if (option=='C'){
            Print_The_Path(Floyd_min_path(mat));
            }
    }
    return 0;
 }