//
//  NumberArray.h
//  NumberArray
//
//  Created by Kensuke Fukutomi on 6/20/24.
//

#ifndef NumberArray_h
#define NumberArray_h
using namespace std;

class NumberArray {
    
private:
    
    double* arrayPointer;
    int size;
    
public:
    NumberArray(int);
    
    ~NumberArray();
    
    void setCell(int, double); // double is value, int is size
    // Explicit variable implementation
    int getCell(int);
    
    // Helper Functions
    double getAverage();
    double getHighest();
    double getLowest();
};

#endif /* NumberArray_h */
