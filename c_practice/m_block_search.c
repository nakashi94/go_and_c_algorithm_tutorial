#include <stdio.h>

int main(void)
{
  int arr[20] = {1, 3, 5, 6, 7, 9, 10, 11, 13, 16, 17, 18, 19, 24, 26, 27, 29, 30, 32, 35};
  int block_num, search_num, index;
  scanf("%d", &block_num);
  scanf("%d", &search_num);
  int len = sizeof(arr) / sizeof(arr[0]);
  int block_length = len / block_num;
  for (int i = 0; i < block_num; i++)
  {
    if (search_num <= arr[(block_length * i) + (block_length - 1)]) // ブロック内に探している要素があるかもしれない
    {
      for (int j = (block_length * i); j < ((block_length * i) + block_length); j++)
      {
        if (arr[j] == search_num)
        {
          index = j;
          printf("break\n");
          break;
        }
        if (j == (((block_length * i) + block_length) - 1))
        {
          index = -1;
        }
      }
      break;
    }
    else
    {
      if (i == block_num - 1)
      {
        printf("no\n");
        index = -1;
      }
      else
      {
        continue;
      }
    }
  }
  printf("%d\n", index);
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
