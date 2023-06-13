#include<stdio.h>
int main()
{
    int count, first_term = 0, second_term = 1, next_term, i;
    printf("Enter the number of terms:\n");
    scanf("%d",&count);
    printf("First %d terms of Fibonacci series:\n",count);
    for ( i = 0 ; i < count ; i++ )
    {
    	count++;
       if ( i <= 1 ){
          count++;
          next_term = i;
      }
       else
       {
       	  count++;
          next_term = first_term + second_term;
          first_term = second_term;
          second_term = next_term;
       }
       printf("%d\n",next_term);
       printf("%d",count);
    }
    return 0;
}
