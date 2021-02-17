//
// Created by ikak on 17/02/2021.
//

#include <iostream>
#include <string.h>
#include "fibonacci.h"

using std::cout; using std::cin;

long fibIter(int n){
    long prev = 1, res = 0;
    for (int i = 0 ; i < n ; i++){
        res += prev;
        prev = res - prev;
    }
    return res;
}

long fibRec(int n){
    if (n <= 1)
    {
        if (n<1)
            return 0;
        return 1;
    }
    return fibRec(n-1) + fibRec(n-2);
}

long fibMem(int n, long arr[]){
    if (n <= 1)
    {
        if (n<1)
            return 0;
        return 1;
    }
    if (arr[n-1] == -1){
        arr[n-1] = fibMem(n-1, arr);
    }
    if (arr[n-2] == -1){
        arr[n-2] = fibMem(n-2, arr);
    }
    return arr[n-1]+arr[n-2];
}

int fibMenu(){
    int n, ans;
    cout << "Welcome to the fibonacci sequence printer!\nEnter the index you want to run to: ";
    cin >> n;
    cout << "\n";
    cout << "Enter the method of choice:\n1 - Iterative\n2 - Recursive\n3 - Recursive memoized\n";
    cin >> ans;
    switch (ans) {
        case 1:
            for (int i = 0; i < n ; i++)
                cout << fibIter(i) << ", ";
            cout << "\n";
            break;
        case 2:
            for (int i = 0; i < n ; i++)
                cout << fibRec(i) << ", ";
            cout << "\n";
            break;
        case 3:
            for (int i = 0; i < n ; i++) {
                long arr[i + 1];
                memset(arr, -1, sizeof(arr));
                cout << fibMem(i,arr) << ", ";
            }
            cout << "\n";
            break;
    }
    int arr[4];
    memset(arr, -1, sizeof(arr));
    return 0;
}