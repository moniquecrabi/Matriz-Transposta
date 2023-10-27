#include <stdio.h>

int main(){
    
    int a = 2; //linhas
    int b = 3; //colunas
    int matriz[2][3] = {{3, 4, 3},
                        {6, 2, 1}};
    int t = 0; 

    printf("Matriz inserida:\n\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    int transporMatriz[3][2];

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            transporMatriz[i][j] = matriz[j][i];
        }
    }

    printf("\nMatriz transposta:\n\n");
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            printf("%d\t", transporMatriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
