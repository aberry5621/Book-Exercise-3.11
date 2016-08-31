//
//  main.cpp
//  Book Exercise 3.11
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.11 - Cost of shipping
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout << "Calculate Cost of Shipping \n";
    
    // D
    double weight_input = 0.0;
    
    // I
    cout << "Enter weight in pounds: ";
    cin >> weight_input;
    
    // P // O
    if (weight_input < 50) {
        // weight is less than 50, run shipping calculation
        if (weight_input > 0 && weight_input <= 1) {
            cout << "Shipping cost is: " << 3.5 << endl;
        } else if (weight_input > 1 && weight_input <= 3) {
            cout << "Shipping cost is: " << 5.5 << endl;
        } else if (weight_input > 3 && weight_input <= 10) {
            cout << "Shipping cost is: " << 8.5 << endl;
        } else if (weight_input > 10 && weight_input <= 20) {
            cout << "Shipping cost is: " << 10.5 << endl;
        }
    }
    else if (weight_input > 50) {
        // weight is over 50, we can't ship it
        cout << "Package is overweight, can't ship it" << endl;
    }
    
    return 0;
}
