#include <stdio.h>
int count=0;
int reverse (int n)
{
int rev = 0;
count++;
while (n !=0){
count++;
rev=rev*10+n%10;
count++;
n/=10;
count++;
}
return rev;
}

int main(){
	int n;
	printf("enter a number :");
	count++;
	scanf("%d",&n);
	count++;
	printf("reverse of %d.",reverse(n));
	count++;
	printf("count of %d is %d.",n,count);
	return 0;
}
