#include <stdio.h>

int main(void)
{

  int l1, c1, l2, c2;

  printf("Digite a primeira linhas e colunas da matriz 1:");
  scanf("%d %d", &l1, &c1);

  int M1[l1][c1];

  printf("Digite o numero de linhas e colunas da matriz 2:");
  scanf("%d %d", &l2, &c2);

  int M2[l2][c2];

  if (l2 == c1)
  {

    int res[l1][c2];
    for (int i = 0; i < l1; i++)
    {
      for (int j = 0; j < c1; j++)
      {
        scanf("%d", &M1[i][j]);
      }
    }

    for (int i = 0; i < l2; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        scanf("%d", &M2[i][j]);
      }
    }

    for (int i = 0; i < l1; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        res[i][j] = 0;
        for (int k = 0; k < l1; k++)
        {
          res[i][j] += M1[i][k] * M2[k][j];
        }
      }
    }
    for (int i = 0; i < l1; i++)
    {
      for (int j = 0; j < c2; j++)
      {
        printf("%d ", res[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}