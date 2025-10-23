#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Size is " << n << endl;

    int sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        max_sum = max(sum, max_sum);
        if (sum < 0) {
            sum = 0; // Start a new subarray
        }
    }

    cout << "Maximum subarray sum is " << max_sum << endl;
    return 0;
}