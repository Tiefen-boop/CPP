//
// Created by ikak on 16/02/2021.
//

#include <iostream>
#include "calculator.h"

using namespace std;

double addition(double x, double y){
    return x + y;
}

double subtraction(double x, double y){
    return x - y;
}

double multiplication(double x, double y){
    return x * y;
}

double division(double x, double y){
    return x / y;
}

int mod(double x, double y){
    return (int)x % (int)y;
}

int calcMenu() {
    cout << "Insert first argument: ";
    double x,y,result;
    char op;
    cin >> x;
    cout << endl;
    cout << "Insert operator: ";
    cin >> op;
    cout << endl;
    cout << "Insert second argument: ";
    cin >> y;
    cout << endl;
    switch (op) {
        case '+':
            result = addition(x,y);
            break;
        case '-':
            result = subtraction(x,y);
            break;
        case '*':
            result = multiplication(x,y);
            break;
        case '/':
            result = division(x,y);
            break;
        case '%':
            result = mod(x,y);
            break;
    }
    cout << x << op << y << '=' << result << endl;
}