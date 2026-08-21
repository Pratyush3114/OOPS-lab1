#include <iostream>
#include <string>
using namespace std;

class PrinterManager;

class Printer {
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    Printer(string name, int pages, int ink, bool power) {
        printerName = name;
        pagesPrinted = pages;
        inkLevel = ink;
        powerStatus = power;
    }

    friend class PrinterManager;
};

class PrinterManager {
public:
    void displayInfo(Printer &p) {
        cout << " Printer Information " << endl;
        cout << "Printer Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%" << endl;

        cout << "Power Status: ";
        if (p.powerStatus)
            cout << "ON" << endl;
        else
            cout << "OFF" << endl;
    }

    void turnOn(Printer &p) {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }

    void turnOff(Printer &p) {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }

    void checkInk(Printer &p) {
        cout << "Current Ink Level: "
             << p.inkLevel << "%" << endl;
    }

    void resetPageCount(Printer &p) {
        p.pagesPrinted = 0;
        cout << "Page count has been reset." << endl;
    }
};

int main() {
    Printer p("x", 1250, 75, false);

    PrinterManager manager;

    manager.displayInfo(p);

    manager.turnOn(p);
    manager.checkInk(p);
    manager.resetPageCount(p);

    cout << endl;

    manager.displayInfo(p);

    manager.turnOff(p);

    return 0;
}