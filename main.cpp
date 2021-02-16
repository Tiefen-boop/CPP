#include <iostream>
#include "./calculator/calculator.h"

int add(int x, int y);

using namespace std;

int fibonacci(int n){
    if (n <= 1)
    {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    cout << "Select number to use app:\n1 - Calculator\n";
    int x;
    cin >> x;
    switch (x) {
        case 1:
            calcMenu();
            break;
    }
}

int add (int x, int y){
    return x+y;
}

