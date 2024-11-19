#include <iostream>

using namespace std;


void printReverse(int number) {
    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }
    
    
    if (number < 10) {
        cout << number;
        return;
    }
    
    /
    cout << (number % 10);
    
 
    printReverse(number / 10);
}

int main() {
    int num;
    
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    cout << "Reversed number: ";
    printReverse(num);
    cout << endl; // For a newline after the reversed number
    
    return 0;
}
