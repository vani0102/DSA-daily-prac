#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int d, int n) {

    d = d % n;

// Reverse whole array
reverse(arr, arr + n);

// Reverse first d elements
reverse(arr, arr + d);

// Reverse remaining elements
reverse(arr + d, arr + n);
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cin >> d;

    rightRotate(arr, d, n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
