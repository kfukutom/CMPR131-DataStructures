//
//  main.cpp
//  HW_1b
//
//  Created by Kensuke Fukutomi on 6/26/24.
//  General Review on C-Strings versus Strings ASCII
//

#include <iostream>
using namespace std;

int main() {
    char firstAndMiddle[20];
    char lastName[20];
    char fullName[40];
    string friendsName;
    
    cout << "Enter your first and middle names: ";
    cin.getline(firstAndMiddle, 20);
    cout << "Enter your last name: ";
    cin.getline(lastName, 20);
    
    // Prompt 2
    strcpy(fullName, firstAndMiddle);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    cout << "\nHow is your love life " << fullName << "?" << endl;
    cout << "\nBy the way, your full name has " << strlen(fullName) << " characters.\n";
    
    // Prompt 3
    cout << "\n\nEnter your friend's full name: ";
    getline(cin >> ws, friendsName);
    cout << "\nHow is " << friendsName << " love life " << firstAndMiddle << "?\n";
    cout << "By the way, your friend's full name has " << friendsName.length() << " characters";
    
    return 0;
}
