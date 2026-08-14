#include <iostream>
#include <string >
using namespace std;
class product{
    private:
    int productid;
    string productname;
    float price;
    int quantity

    public:
    void accept(){
cout <<"enter id "<<endl;
cin>>productid;
cin.ignore();
cout <<"enter name "<<endl;
getline(cin,productname);
cout <<"enter price "<<endl;
cin>>price;
cout <<"enter quantity"<<endl;
cin>>quantity;
    }
    float getcost(){
        return price*quantity;
    }
    void display(){
        cout<<"product id :"<<productid<<endl;
        cout<<"product product name :"<<productname<<endl;
        cout<<"product price :"<<price<<endl;
        cout<<"quantity is:"<<quantity<<endl;
    }
};
    int main (){
        int n;
        float inventoryvalue=0;
        cout <<"enter number of products:";
        cin>>n;
        product *p=new int product[n];
        for (int i=0;i<n;i++){
            cout <<"enter the product details "<<i+1<<endl;
            p[i].accept;
            
        }
        for (int i=0;i<n;i++){
            cout<<"product"<<i+1<<endl;
            p[i].display;
            inventoryvalue+=p[i].getcost();
        }
        cout<<"overall inventory value is "<<inventoryvalue<<endl;
        delete[] p;
        return 0;
    }
