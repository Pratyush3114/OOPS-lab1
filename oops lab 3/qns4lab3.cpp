#include <iostream>
using namespace std;
int main(){
    int n,search,positon=-1;
    cout <<"enter the size of array";
    cin>>n;
    int *arr= new int [n];
    cout <<"enter "<<n<<"elements:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to search ";
    cin>>search;
    for (int i=0;i<n;i++){
        if (arr[]==search){
            positon = i;
            break;
        }
    }
    if (positon!=1){
        cout<<"element is found"<<endl;

    }
    else{
        cout <<"element is not present"<<endl;

    }
delete[]arr;
return 0;
}