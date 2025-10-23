#include <iostream>
#include <vector>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int n = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // Print elements
    for (int i = 0; i < n; i++) {
        cout << "The element is: " << myNumbers[i] << endl;
    }

    cout << "Program is to run the prefix code on the array" << endl;

    // Prefix sum logic
    vector<int> prefix;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += myNumbers[j];
        }
        prefix.push_back(sum);
    }

    // Print prefix sum
    cout << "Prefix sum:" << endl;
    for (auto it = prefix.begin(); it != prefix.end(); it++) {
        cout << *it << endl;
    }

    // Suffix sum logic
    vector<int> suffix;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += myNumbers[j];
        }
        suffix.push_back(sum);
    }

    // Print suffix sum
    cout << "Suffix sum:" << endl;
    for (auto it = suffix.begin(); it != suffix.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}