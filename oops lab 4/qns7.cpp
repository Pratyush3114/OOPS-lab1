#include <iostream>
#include <string>
using namespace std;

class MuseumManager;

class Exhibit {
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit(string name, int id, int visitors, bool status) {
        exhibitName = name;
        exhibitID = id;
        visitorCount = visitors;
        displayStatus = status;
    }

    friend class MuseumManager;
};

class MuseumManager {
public:
    void displayInfo(Exhibit &e) {
        cout << " Exhibit Information" << endl;
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;

        cout << "Display Status: ";
        if (e.displayStatus)
            cout << "Open" << endl;
        else
            cout << "Closed" << endl;
    }

    void addVisitors(Exhibit &e, int visitors) {
        e.visitorCount += visitors;
        cout << visitors << " visitors added." << endl;
    }

    void resetVisitors(Exhibit &e) {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }

    void openExhibit(Exhibit &e) {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }

    void closeExhibit(Exhibit &e) {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }

    void checkStatus(Exhibit &e) {
        if (e.displayStatus)
            cout << "Exhibit is currently OPEN." << endl;
        else
            cout << "Exhibit is currently CLOSED." << endl;
    }
};

int main() {
    Exhibit e("Ancient Coins", 101, 50, true);

    MuseumManager manager;

    manager.displayInfo(e);

    manager.addVisitors(e, 25);
    manager.checkStatus(e);

    manager.closeExhibit(e);
    manager.resetVisitors(e);

    cout << endl;

    manager.displayInfo(e);

    return 0;
}