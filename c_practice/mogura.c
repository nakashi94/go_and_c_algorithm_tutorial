#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int num, ans, score;
  srand((unsigned int)time(NULL));
  for (int i = 0; i < 10; i++)
  {
    num = rand() % 10;
    for (int j = 0; j < 10; j++)
    {
      if (num == j)
      {
        printf("  #  ");
      }
      else
      {
        printf("     ");
      }
    }
    printf("\n");
    for (int _ = 0; _ < 10; _++)
    {
      printf(" --- ");
    }
    printf("\n");
    for (int j = 0; j < 10; j++)
    {
      printf("  %d  ", j);
    }
    printf("\n");
    scanf("%d", &ans);
    if (ans == num)
    {
      score += 1;
    };
  };
  printf("%d\n", score);
  return 0;
}
