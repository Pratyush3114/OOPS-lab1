#include <iostream>
#include <string>
using namespace std;

class MovieTicket {
private:
    string movieName;
    double ticketPrix;
    int numTickets;

public:
    // Member function to accept booking details
    void acceptDetails() {
        cout << "Enter movie name: ";
        getline(cin >> ws, movieName);
        cout << "Enter ticket price: ";
        cin >> ticketPrix;
        cout << "Enter number of tickets: ";
        cin >> numTickets;
    }

    // Member function to calculate total ticket cost
    double calculateTotalCost() {
        return ticketPrix * numTickets;
    }

    // Member function to display booking summary
    void displaySummary() {
        cout << "\n--- Booking Summary ---" << endl;
        cout << "Movie Name        : " << movieName << endl;
        cout << "Price per Ticket  : $" << ticketPrix << endl;
        cout << "Number of Tickets : " << numTickets << endl;
        cout << "Total Cost        : $" << calculateTotalCost() << endl;
    }
};

int main() {
    MovieTicket booking;
    
    // Accept input details from user
    booking.acceptDetails();
    
    // Display the final summary
    booking.displaySummary();
    
    return 0;
}
