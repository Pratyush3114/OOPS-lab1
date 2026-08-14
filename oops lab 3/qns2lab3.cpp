#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size ";
    cin>>n;
    int *arr= new int[n];
    cout <<"enter "<<n<<"elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    cout<<"array in reverse order:";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<"";

    }
cout << endl;
delete[]arr;
return 0;
    
}