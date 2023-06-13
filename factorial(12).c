#include<stdio.h>  
int main()    
{    
 int i,fact=1,number; 
 int count=0;   
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){  
	count++;  
      fact=fact*i;    
  }    
  count++;
  printf("Factorial of %d is: %d\n",number,fact);   
  printf("time complexity:%d",count); 
return 0;  
}
