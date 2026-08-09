#include <iostream>
#include <string>

class HostelFee {
private:
    std::string studentName;
    int hostelId;
    double monthlyFee;
    int numberOfMonths;
    double totalFee;
    double finalAmount;

public:
    // Member function to accept student details
    void acceptDetails() {
        std::cout << "Enter Student Name: ";
        std::getline(std::cin >> std::ws, studentName);
        
        std::cout << "Enter Hostel ID: ";
        std::cin >> hostelId;
        
        std::cout << "Enter Monthly Fee: ";
        std::cin >> monthlyFee;
        
        std::cout << "Enter Number of Months: ";
        std::cin >> numberOfMonths;
    }

    // Member function to calculate fee and apply late fine if delayed
    void calculateFinalAmount() {
        totalFee = monthlyFee * numberOfMonths;
        finalAmount = totalFee;

        char delayed;
        std::cout << "Is the payment delayed? (y/n): ";
        std::cin >> delayed;

        if (delayed == 'y' || delayed == 'Y') {
            finalAmount += 500; // Apply 500 Rs fine
            std::cout << "Late fine of Rs. 500 applied.\n";
        }
    }

    // Member function to display the final amount payable
    void displayDetails() {
        std::cout << "\n--- Hostel Fee Receipt ---\n";
        std::cout << "Student Name: " << studentName << "\n";
        std::cout << "Hostel ID: " << hostelId << "\n";
        std::cout << "Base Hostel Fee: Rs. " << totalFee << "\n";
        std::cout << "Final Amount Payable: Rs. " << finalAmount << "\n";
        std::cout << "--------------------------\n";
    }
};

int main() {
    HostelFee student;
    
    // Call member functions
    student.acceptDetails();
    student.calculateFinalAmount();
    student.displayDetails();
    
    return 0;
}
