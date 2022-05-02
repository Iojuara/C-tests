#include <stdio.h>

int main(void)
{

  int lin, col, c = 0, test = 0;

  printf("Digite o numero de linhas e de coluna da matriz: ");
  scanf("%d %d", &lin, &col);

  int Mat[lin][col];

  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      scanf("%d", &Mat[i][j]);
    }
  }
  for (int i = 0; i < lin; i++)
  {
    for (int j = 0; j < col; j++)
    {
      for (int k = 0; k < lin; k++)
      {
        for (int p = 0; p < col; p++)
        {
          if (Mat[i][j] == Mat[k][p])
          {
            c++;
          }
        }
        if (c >= 2)
        {
          test = 1;
        }
        c = 0;
      }
    }
  }

  if (test == 1)
  {
    printf("Existe elemento repetido\n");
  }
  else
  {
    printf("Não existe elemento repetido\n");
  }

  return 0;
}