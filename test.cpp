#include <iostream>
#include "calculator.h"
using namespace std;
#include <cstdlib>


int main() {
    
    double num1, num2;
    int inum1, inum2;
    int choice;
    
    cout << "Type the number of the operation you would like to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. GCD" << endl;
    cout << "6. Least Common Multiple" << endl;
    cout << "7. Random number generator" << endl;
    cout << "8. Factorial" << endl;
    
    cin >> choice;
    
    switch (choice) {
        case 1: 
        cout << "Enter two numbers of the same type: " << endl;
        cin >> num1 >> num2;
        cout << add(num1,num2);
        break;
        
        case 2: 
        cout << "Enter two numbers of the same type: " << endl;
        cin >> num1 >> num2;
        cout << subtract(num1,num2);
        break;
        
        case 3: 
        cout << "Enter two numbers of the same type: " << endl;
        cin >> num1 >> num2;
        cout << multiply(num1,num2);
        break;
        
        case 4: 
        cout << "Enter two numbers of the same type: " << endl;
        cin >> num1 >> num2;
        cout << divide(num1,num2);
        break;
        
        case 5:
        cout << "Enter two integers: " << endl;
        cin >> inum1 >> inum2;
        cout << gcd(inum1,inum2);
        break;
        
        case 6:
        cout << "Enter two integers: " << endl;
        cin >> inum1 >> inum2;
        cout << lcm(inum1,inum2);
        break;
        
        case 7:
        cout << "Enter a range in two integers: " << endl;
        cin >> inum1 >> inum2;
        cout << randNumGen(inum1,inum2);
        break;
        
        case 8:
        cout << "Enter an integer: " << endl;
        cin >> inum1;
        cout << factorial(inum1);
        break;
    }
    
    
    return 0;
}

