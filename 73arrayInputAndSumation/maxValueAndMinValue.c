
#include<stdio.h>
int main()
{
    int num[100], i, n;
    printf("Enter N number : ");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &num[i]);
    }
    int max = num[0], min = num[0];

    for(i = 0; i< n; i++){
        if(max < num[i]){
            max = num[i];
        }
        if(min > num[i]){
            min = num[i];
        }
    }
    printf("the max is : %d\n", max);
    printf("the max is : %d\n", min);
}
