#include<iostream>
using namespace std;
int main(){
    int n,even =0 ,odd=0;
    cout <<"enter the size of the array";
    cin>>n;
    int*arr= new int [n];
    cout<<"enter"<<n<<"elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]%2==0)
        even++;
    else odd++;
    }
    cout<<"number of even elements are "<<even;<<endl;
    cout<<"number of odd elements are "<<odd;<<endl;
delete[]arr;
return 0;
}