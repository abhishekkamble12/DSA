#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[8] = {2, 2, 3, 1, 3, 2, 1, 1};
    cout << "To find the frequency of the number in the array greater than the floor(n/2):" << endl;

    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int occur = 1;
        bool alreadyExists = false;

        // Skip if already in vec
        for (int k = 0; k < vec.size(); k++) {
            if (vec[k] == arr[i]) {
                alreadyExists = true;
                break;
            }
        }
        if (alreadyExists) continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                occur += 1;
            }
        }

        if (occur > n / 3) {
            vec.push_back(arr[i]);
        }
    }

    if (vec.size() == 0) {
        cout << "No element appears more than floor(n/2) times." << endl;
    } else {
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
