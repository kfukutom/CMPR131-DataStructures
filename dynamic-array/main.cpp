#include "NumberArray.h"
#include <iostream>
using namespace std;


int main() {
    // How many numbers
    int howMany = 0;
    int count = 0;
    double val = 0.0;
    
    cout << "How many numbers would you like to store? ";
    cin >> howMany;
    
    // Create a NumberArray Object
    NumberArray numbers(howMany);
    // Get the Numbers
    cout << "\nEnter " << howMany << " numbers:\n";
    for (count = 0; count < howMany; ++count) {
        // Get numbers from the user
        cout << "Number " << count + 1 << ": ";
        cin >> val;
        
        // Store the Value into the Array
        numbers.setCell(count, val);
    }
    
    // Display the values in the object
    cout << "--------------------------\n";
    cout << "\nHere are the numbers you entered.\n";
    for (count = 0; count < howMany; ++count) {
        cout << "Number " << count - 1 << ": " << numbers.getCell(count) << endl;
    }
    
    cout << "\nThe average of all the values in the array is: " << numbers.getAverage() << endl;
    cout << "The highest value in the array is: "  << numbers.getHighest() << endl;
    cout << "The lowest value in the array is: " << numbers.getLowest() << endl;
    
    return 0;
}
