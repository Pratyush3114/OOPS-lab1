#include <iostream>
#include <string>

class HotelRoom {
private:
    int roomNumber;
    std::string guestName;
    int daysStayed;
    double costPerDay;

public:
    // Member function to accept room and guest details
    void acceptDetails() {
        std::cout << "Enter Guest Name: ";
        std::getline(std::cin >> std::ws, guestName); // Handles spaces in names
        
        std::cout << "Enter Room Number: ";
        std::cin >> roomNumber;
        
        std::cout << "Enter Number of Days Stayed: ";
        std::cin >> daysStayed;
        
        std::cout << "Enter Cost Per Day: ";
        std::cin >> costPerDay;
    }

    // Member function to calculate the total room rent
    double calculateTotalRent() const {
        return daysStayed * costPerDay;
    }

    // Member function to display the complete booking details
    void displayBookingDetails() const {
        std::cout << "\n===================================" << std::endl;
        std::cout << "         BOOKING DETAILS           " << std::endl;
        std::cout << "===================================" << std::endl;
        std::cout << "Guest Name:        " << guestName << std::endl;
        std::cout << "Room Number:       " << roomNumber << std::endl;
        std::cout << "Days Stayed:       " << daysStayed << std::endl;
        std::cout << "Cost Per Day:      $" << costPerDay << std::endl;
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "Total Room Rent:   $" << calculateTotalRent() << std::endl;
        std::cout << "===================================" << std::endl;
    }
};

int main() {
    // Create an object of HotelRoom
    HotelRoom room1;

    // Accept details, calculate, and display
    std::cout << "--- Enter Hotel Room Booking Information ---" << std::endl;
    room1.acceptDetails();
    room1.displayBookingDetails();

    return 0;
}