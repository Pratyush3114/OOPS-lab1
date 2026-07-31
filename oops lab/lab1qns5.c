#include <stdio.h>
int main(){
    int n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];

    int *ptr;
    printf("enter the integers");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    ptr=arr;
    for(i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("the sum of the elements is %d",sum);
    return 0;
}
