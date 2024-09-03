#include <iostream>
using namespace std;

int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int first, last;
    cout<<" -------------------------------------------------";
    cout << "\nEnter the first integer: ";
    cin >> first;
    cout << "\nEnter the last integer: ";
    cin >> last;

    int result = sum_from_to(first, last);
    cout << "The sum of integers from " << first << " to " << last << " is " << result << endl;
    cout<<"\n-----------------------------------------------------";

    return 0;
}
