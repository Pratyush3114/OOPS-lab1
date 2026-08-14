#include <iostream>
using namespace std;
int main(){
    int *a=new int;
    int *b=new int;
    cout<<"enter value of a :"<<endl;
    cin>>*a;
     cout<<"enter value of a :"<<endl;
     cin>>*b;
     cout<<"sum of two numbers is "<<*a + *b<<endl;
     cout<<"difference of two numbers is "<<*a-*b<<endl;
     cout<<"product of two numbers is "<<(*a)*(*b)<<endl;
     cout<<"quotient of two numbers is "<<(*a)/(*b)<<endl;
     delete a ;
     a=nullptr;
     delete b;
     b=nullptr;
     return 0;
}