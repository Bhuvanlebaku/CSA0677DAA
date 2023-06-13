#include <stdio.h>
int count=0;
int main() {
    int n, i;
    count++;
    printf("Enter the size of the array: ");
    count++;
    scanf("%d", &n);
    count++;
    int arr[n];
    count++;
    printf("Enter %d elements: ", n);
    count++;
    for (i = 0; i < n; i++) {
    	count++;
        scanf("%d", &arr[i]);
        count++;
    }
    int max = arr[0];
    count++;
    for (i = 1; i < n; i++) {
    	count++;
        if (arr[i] > max) {
        	count++;
            max = arr[i];
            count++;
        }
     }
    printf("The largest element is %d\n", max);
    count++;
    printf("time complexity is %d",count);
    return 0;
}
