//using STL reverse function
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s;
    cin >> s;

    string original = s;

    reverse(s.begin(), s.end());

    if(original == s) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}
