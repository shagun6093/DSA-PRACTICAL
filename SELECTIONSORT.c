#include <stdio.h>
int main()
{
  int array[100], n, i, j, min, t;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0; i < (n - 1); i++) // finding minimum element (n-1) times
  {
    min = i;

    for (j = i + 1; j < n; j++)
    {
      if (array[min] > array[j])
        min = j;
    }
    if (min != i)
    {
      t = array[i];
      array[i] = array[min];
      array[min] = t;
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i= 0; i < n; i++)
    printf("%d\n", array[i]);

  return 0;
}

