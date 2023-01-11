#include <stdio.h>

int sequential_search(int, int *, int);

int main(void)
{
  int arr[] = {12, 2, 3, 43, 53};
  int len = sizeof(arr) / sizeof(arr[0]);
  int num, index;
  scanf("%d", &num);
  index = sequential_search(num, arr, len);
  if (index == -1)
  {
    printf("%dを発見できませんでした\n", num);
  }
  else
  {
    printf("%dを配列のインデックス番号%dで発見しました\n", num, index);
  }
  return 0;
}

int sequential_search(int num, int *arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    if (arr[i] == num)
    {
      return i;
    }
  }
  return -1;
}
