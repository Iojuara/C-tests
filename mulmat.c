#include <stdio.h>

int main(void)
{

  int l1, c1, l2, c2, soma = 0, k = 0;

  printf("Digite a primeira linhas e colunas da matriz 1:");
  scanf("%d %d", &l1, &c1);

  int M1[l1][c1];

  printf("Digite o numero de linhas e colunas da matriz 2:");
  scanf("%d %d", &l2, &c2);

  int M2[l2][c2];

  if (l2 == c1)
  {
    int Prod[l1][c2];

    for (int i = 0; i < l1; i++)
    {
      for (int j = 0; j < c1; j++)
      {
        scanf("%d", &M1[l1][c1]);
      }
    }

    for (int i = 0; i < l2; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        scanf("%d", &M2[l2][c2]);
      }
    }

    for (int i = 0; i < l1; i++)
    {
      while (k != l1)
      {
        for (int j = 0; j < c2; j++)
        {
          soma += (M1[i][j] * M2[j][k]);
        }
        Prod[i][k] = soma;
        soma = 0;
        k++;
      }
      k = 0;
    }

    for (int i = 0; i < l1; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        printf("%d ", Prod[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Não é possível fazer a multiplicação das duas matrizes!\n");
  }

  return 0;
}