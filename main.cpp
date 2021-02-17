#include <iostream>
#include "./calculator/calculator.h"
#include "./fibonacci/fibonacci.h"

using std::cout; using std::endl; using std::cin;

int main() {
    cout << "Select number to use app:\n1 - Calculator\n2 - fibonacci printer\n";
    int x;
    cin >> x;
    switch (x) {
        case 1:
            calcMenu();
            break;
        case 2:
            fibMenu();
            break;
    }
}
