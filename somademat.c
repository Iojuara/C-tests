#include <stdio.h>

int main(void)
{

  int l, c, s = 0;

  printf("Digite o numero de linhas e colunas das matrizes:\n");
  scanf("%d %d", &l, &c);
  int M1[l][c];
  int M2[l][c];
  int S[l][c];
  printf("Preencha a primeira matriz abaixo:\n");
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &M1[i][j]);
    }
  }

  printf("Preencha a segunda matriz abaixo:\n");
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &M2[i][j]);
    }
  }

  printf("Soma resultante:\n");
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      S[i][j] = M1[i][j] + M2[i][j];
      printf("%d ", S[i][j]);
    }
    printf("\n");
  }

  return 0;
}