#include <stdio.h>

int binary_search(int, int *, int);

int main(void)
{
  int arr[] = {1, 3, 7, 8, 10, 15, 21, 22, 24};
  int length;
  length = sizeof(arr) / sizeof(arr[0]);
  int search_num, index = -2;
  scanf("%d", &search_num);
  index = binary_search(search_num, arr, length);
  if (index == -1)
  {
    printf("%dは見つかりませんでした\n", search_num);
  }
  else
  {
    printf("%dは%dで見つかりました\n", search_num, index);
  }
  return 0;
}

int binary_search(int search_num, int *arr, int length)
{
  int left = 0, right = length - 1, mid;
  do
  {
    mid = (right + left) / 2;
    if (search_num == arr[mid])
    {
      return mid;
    }
    if (search_num < arr[mid])
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
    printf("%d %d %d\n", left, right, mid);
  } while (left <= right);
  return -1;
}
