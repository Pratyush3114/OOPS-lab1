#include <iostream>
#include<string>
using namespace std;

class Car{
    private:
    string carNumber;
    string brandname;
    int modelYear;

    public:
    void acceptDetails(){
        cout<<"enter car nuamber";
        getline(cin >> ws,carNumber);
        cout<<"enter brand name :";
        getline(cin,brandname);
        cout<<"enter model year:";
        cin>>modelYear;
    }


void displayDetails(){
    cout << "car information"<<endl;
    cout <<"car number:"<<carNumber<<endl;
     cout <<"brand name :"<<brandname<<endl;
      cout <<"model year"<<modelYear<<endl;
}
};

int main(){
    Car mycar;
    cout<<"input car details "<<endl;
    mycar.acceptDetails();
    mycar.displayDetails();
    return 0;
}