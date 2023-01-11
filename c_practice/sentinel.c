#include <stdio.h>

int main(void)
{
  int arr[5] = {1, 3, 6, 8};
  int num, i = 0;
  scanf("%d", &num);
  arr[((sizeof(arr) / sizeof(arr[0])) - 1)] = num;
  while (num != arr[i])
  {
    i += 1;
  }
  if (i < 5 - 1)
    printf("%d番目にある\n", i);
  else
    printf("見つかりませんでした\n");
  return 0;
}
