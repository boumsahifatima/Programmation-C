#include <stdio.h>

int main()
{
    int M, N, Max;
    printf("Entrer nbr des lignes de la matrice : ");
    scanf("%d", &M);
    printf("Entrer nbr des colonnes de la matrice : ");
    scanf("%d", &N);
    int Matrice[M][N];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Entrer l'element de ligne %d, de colonne %d : ", i, j);
            scanf("%d", &Matrice[i][j]);
        }
    }

    Max = Matrice[0][0];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Max < Matrice[i][j])
            {
                Max = Matrice[i][j];
            }
        }
    }
    
    printf("\nLe plus grand element de cette matrice est %d", Max);
    return 0;
}
