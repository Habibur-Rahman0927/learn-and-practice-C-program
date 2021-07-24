#include<stdio.h>
int main()
{
    int num[100], i, n, sum= 0;
    printf("Enter N number : ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &num[i]);
    }
    for(i = 0; i< n; i++){
        sum = sum+num[i];
    }
    printf("the sum is : %d\n", sum);
}
