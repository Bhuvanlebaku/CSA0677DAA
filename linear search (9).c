#include<stdio.h>
int main()
{
  int array[100], search, c, n;
  int count=0;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (c = 0; c < n; c++)
  {
  	count++;
    scanf("%d", &array[c]);
  }
  count++;
  printf("Enter a number to search\n");
  scanf("%d", &search);
  for (c = 0; c < n; c++)
  {
  	count++;
    if (array[c] == search)  
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  count++;
  if (c == n)
    printf("%d isn't present in the array.\n", search);
    printf("%d",count);

  return 0;
}



