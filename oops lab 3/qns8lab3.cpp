#include <iostream>
using namespace std ;
void accept(int *arr, int n){
    cout <<"enter"<<n<<"elements";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

}
int calculatesum(int *arr,int n){
    int sum=0;
    for (int i ;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int findsmallest (int *arr,int n){
    int smallest=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]<smallest){
         smallest=arr[i];
        }
    }
    return smallest;
}
int findlargest (int *arr,int n){
    int largest=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>largest){
         largest=arr[i];
        }
    }
    return largest;
}
void display(int sum,int smallest,int largest){
    cout<<"sum"<<sum<<endl;
    cout<<"smallest element"<<smallest<<endl;
   cout<<"largest element"<<largest<<endl;

   
}
int main(){
    int n;
    cout<< "enter the size";
    cin>>n;
    int *arr=new int[n];
    accept(arr,n);
    int sum= calculatesum(arr,n);
    int smallest=findsmallest(arr,n);
    int largest=findlargest(arr,n);
    display(sum,smallest,largest);
    delete[]arr;
    return 0;
}
