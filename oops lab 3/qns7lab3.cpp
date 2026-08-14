#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the character array: ";
    cin >> n;

    // Dynamically allocate character array
    char* arr = new char[n];

    cout << "Enter the string: ";
    cin.ignore();
    cin.getline(arr, n);

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    // Examine each character
    for (int i = 0; arr[i] != '\0'; i++) {

        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
            arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' ||
            arr[i] == 'O' || arr[i] == 'U') {

            vowels++;
        }
        else if ((arr[i] >= 'a' && arr[i] <= 'z') ||
                 (arr[i] >= 'A' && arr[i] <= 'Z')) {

            consonants++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9') {

            digits++;
        }
        else if (arr[i] == ' ') {

            spaces++;
        }
    }

    cout << "\nVowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}