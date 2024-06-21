//
//  NumerArray.cpp
//  NumberArray, Dynamic Array Data Structure
//
//  Created by Kensuke Fukutomi on 6/20/24.
//

#include <iostream>
#include "NumberArray.h"
using namespace std;

NumberArray::NumberArray(int size) {
    this->size = size; // Assign this class' size with Main()'s size
    arrayPointer = nullptr; // Initialized to Null Pointer
    arrayPointer = new double[size];
}

NumberArray::~NumberArray(){
    if (arrayPointer != nullptr){
        // Delete the array, hanging pointer error
        delete[] arrayPointer;
        arrayPointer = nullptr;
    }
}

// Memory Management is Our Responsibility
void NumberArray::setCell(int c, double val) {
    if (arrayPointer != nullptr && (c >= 0) && (c < size)) {
        // Above validates the cell number, as well as checking if the position of the dynamic array is valid
        arrayPointer[c] = val;
    }
    else {
        cout << "Invalid Cell Number\n";
        exit(EXIT_FAILURE);
    }
}

int NumberArray::getCell(int c) {
    if (c < 0 || c > size) {
        cout << "Invalid cell number \n";
        exit(EXIT_FAILURE);
    }
    else {
        return arrayPointer[c];
    }
}

double NumberArray::getAverage() {
    double total = 0.0;
    for (int i = 0; i < size; ++i) {
        total += arrayPointer[i];
    }
    return static_cast<double>(total / size);
}

double NumberArray::getHighest(){
    double highest = arrayPointer[0]; // Reference Point
    
    for (int i = 1; i < size; ++i) {
        if (arrayPointer[i] > highest) {
            highest = arrayPointer[i];
        }
    }
    return highest;
}

double NumberArray::getLowest(){
    double lowest = arrayPointer[0]; // Reference Point
    
    for (int i = 1; i < size; ++i) {
        if (arrayPointer[i] < lowest) {
            lowest = arrayPointer[i];
        }
    }
    return lowest;
}


