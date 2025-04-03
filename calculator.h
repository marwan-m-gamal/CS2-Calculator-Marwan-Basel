#include <cstdlib>
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

template <class T>
T subtract(T a, T b) {
    return a - b;
}

template <class T>
T multiply(T a, T b) {
    return a * b;
}


template <class T>
T divide(T a, T b) {
    while (b == 0) {
        cout << "Second number cannot be zero!" << endl;
        cin >> b;
    }
    return a/b;
}

int factorial(int a);

int gcd(int a, int b);

int lcm(int a, int b);

template <class T>
T randNumGen(T min, T max) {
    return min + rand() % (max - min + 1);
}
