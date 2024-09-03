#include <iostream>
using namespace std;

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    // Check if either num or denom is zero or negative
    if (num <= 0 || denom <= 0) {
        return 0;
    }
    
    // Calculate the GCD of num and denom
    int divisor = gcd(num, denom);
    
    // Divide num and denom by their GCD to reduce the fraction
    num /= divisor;
    denom /= divisor;
    
    return 1;
}

int main() {
    int numerator, denominator;
    
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
    
    int result = reduce(numerator, denominator);
    
    if (result == 1) {
        cout << "The reduced fraction is " << numerator << "/" << denominator << endl;
    } else {
        cout << "Failed to reduce the fraction." << endl;
    }
    
    return 0;
}
