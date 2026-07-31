#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a ,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swaping we got");
    printf("%d%d",a,b);
    return 0;
}