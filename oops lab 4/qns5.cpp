#include <iostream>
#include <string>
using namespace std;

class EventParticipant {
private:
    string participantName;
    int age;
  
public:
    EventParticipant(string name, int a) {
        participantName = name;
        age = a;
       
    }

    friend void verifyParticipant(EventParticipant p);
};

void verifyParticipant(EventParticipant p) {
    cout << " Participant Details are" << endl;
    cout << "Name: " << p.participantName << endl;
    cout << "Age: " << p.age << endl;
    

    if (p.age >= 18 )
        cout << "Eligibility: Eligible" << endl;
    else
        cout << "Eligibility: Not Eligible" << endl;
}

int main() {
    EventParticipant p("ronaldo", 17);

    verifyParticipant(p);

    return 0;
}