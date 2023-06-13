#include<stdio.h>
int count=0;
int max, min;
int a[100];
void maxmin(int i, int j)
{
 count++;
 int max1, min1, mid;
 if(i==j)
 {count++;
  max = min = a[i];
  count++;
 }
 else
 {count++;
  if(i == j-1)
  {count++;
   if(a[i] <a[j])
   {count++;
    max = a[j];
    count++;
    min = a[i];
    count++;
   }
   else
   {count++;
    max = a[i];
    count++;
    min = a[j];
    count++;
   }
  }
  else
  {count++;
   mid = (i+j)/2;
   count++;
   maxmin(i, mid);
   count++;
   max1 = max; min1 = min;
   count++;
   maxmin(mid+1, j);
   count++;
   if(max <max1)
    max = max1;
    count++;
   if(min > min1)
    min = min1;
    count++;
  }count++;
 }count++;
}
int main ()
{
 int i, num;
 printf ("\nEnter the total number of numbers : ");
 scanf ("%d",&num);
 printf ("Enter the numbers : \n");
 for (i=1;i<=num;i++)
 {
 	count++;
  scanf ("%d",&a[i]);
}count++;
 max = a[0];
 count++;
 min = a[0];
 count++;
 maxmin(1, num);
 count++;
 printf ("Minimum element in an array : %d\n", min);
 printf ("Maximum element in an array : %d\n", max);
 printf("count=%d",count);
 return 0;
}
