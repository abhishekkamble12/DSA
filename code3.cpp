#include <iostream>
using namespace std;

int main() {
    cout << "Using two pointers to segregate 0s and 1s in the array" << endl;

    int arr[6] = {1, 0, 1, 0, 1, 0};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start < end) {
        if (arr[start] == 0) {
            start++;
        } else if (arr[end] == 1) {
            end--;
        } else {
            // Swap arr[start] and arr[end]
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    // Print the segregated array
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}