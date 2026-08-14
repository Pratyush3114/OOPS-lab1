#include <iostream>
#include <string>
using namespace std ;
class book{
    private:
    int bookid;
    string booktitle;
    string author;
    float price ;

    public:
    void accept(){
        cout <<"enter book id";
        cin>>bookid;
        cin.ignore();
        cout <<"enter book tittle:";
         getline(cin,booktitle);
        cout <<"enter book author:";
         getline(cin,author); 
         cout <<"enter book price:";
           getline(cin,price); 

    }
     void display(){
        cout <<"book id"<<bookid<<endl;
        cout <<"book book tittle"<<booktitle<<endl;
        cout <<"book author"<<author<<endl;
        cout <<"book price"<<price<<endl;
     }
     int main(){
        book *b= new book;
        b->accept();
        b->display();
        delete b;
        return 0;
     }

}
