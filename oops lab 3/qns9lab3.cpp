#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float salary;

public:

    // Function to accept employee details
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, employeeName);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }

    // Function to get salary
    float getSalary() {
        return salary;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    // Dynamically allocate an array of Employee objects
    Employee* employees = new Employee[n];

    // Accept details of all employees
    cout << "\nEnter employee details:\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].acceptDetails();
    }

    // Display details of all employees
    cout << "\n========== Employee Details ==========\n";

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].displayDetails();
    }

    // Find employee with highest salary
    int highestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (employees[i].getSalary() > employees[highestIndex].getSalary()) {
            highestIndex = i;
        }
    }

    cout << "\n========== Highest Salary ==========\n";
    employees[highestIndex].displayDetails();

    // Calculate average salary
    float totalSalary = 0;

    for (int i = 0; i < n; i++) {
        totalSalary += employees[i].getSalary();
    }

    float averageSalary = totalSalary / n;

    cout << "\nAverage Salary: " << averageSalary << endl;

    // Release dynamically allocated memory
    delete[] employees;

    return 0;
}