#include <iostream>
#include "calculator.h"
using namespace std;


int factorial(int a) {
    if (a < 0) {
        a *= -1;
    }
    if (a == 0 || a == 1) return 1;
    return a*factorial(a-1);
}

int gcd(int a, int b) {
    while (b != 0) {int temp=b; b=a%b; a=temp;} return a;
}

int lcm(int a, int b) {
    return (a*b) / gcd(a,b);
}


