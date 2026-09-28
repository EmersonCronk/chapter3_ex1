#include <iostream>
using namespace std;

int main() {
    double gallons;
    double miles;

    cout << "Enter the gallons of gas the car can hold: ";
    cin >> gallons;

    cout << "Enter the number of miles the car can drive on a full tank: ";
    cin >> miles;

    double mpg = miles / gallons;

    cout << "The car gets " << mpg << " miles per gallon." << endl;

    return 0;
}