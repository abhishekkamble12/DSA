// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     cout << "Trapping Rain Water Problem" << endl;

//     vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
//     int n = height.size();

//     // Print elements
//     for (int i = 0; i < n; i++) {
//         cout << "Height[" << i << "] = " << height[i] << endl;
//     }

//     // Left max array
//     vector<int> left_max(n);
//     left_max[0] = height[0];
//     for (int i = 1; i < n; i++) {
//         left_max[i] = max(left_max[i - 1], height[i]);
//     }

//     // Right max array
//     vector<int> right_max(n);
//     right_max[n - 1] = height[n - 1];
//     for (int i = n - 2; i >= 0; i--) {
//         right_max[i] = max(right_max[i + 1], height[i]);
//     }

//     // Storing trapped water
//     vector<int> store(n);
//     int total = 0;
//     for (int i = 0; i < n; i++) {
//         int water = min(left_max[i], right_max[i]) - height[i];
//         store[i] = (water > 0) ? water : 0;
//         total += store[i];
//     }

//     // Print results
//     cout << "\nTrapped water at each index: ";
//     for (int i = 0; i < n; i++) {
//         cout << store[i] << " ";
//     }
//     cout << "\nTotal trapped water = " << total << endl;

//     return 0;
// }

// optimize approach for the code

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
    int n = height.size();

    // finding the max height 
    int index = INT_MIN;
    for(int i=0;i<n;i++){
        index = max(height[i], index);
    }

    int idx = -1;
    for(int i=0;i<n;i++){
        if(height[i] == index){
            idx = i;
        }
    }
    cout << "index of the tallest building is " << idx << endl;

    int left_max = height[0];
    int right_max = height[n-1];
    vector<int> store(n, 0);

    // left side
    for (int i=0; i<idx; i++) {
        left_max = max(left_max, height[i]);
        int water = left_max - height[i];
        store[i] = (water > 0) ? water : 0;
    }

    // tallest building
    store[idx] = 0;

    // right side
    for (int i=n-1; i>idx; i--) {
        right_max = max(right_max, height[i]);
        int water = right_max - height[i];
        store[i] = (water > 0) ? water : 0;
    }

    // print result
    cout << "Trapped water per index:" << endl;
    int total = 0;
    for (int i=0; i<n; i++) {
        cout << "index " << i << " -> " << store[i] << endl;
        total += store[i];
    }
    cout << "Total trapped water = " << total << endl;

    return 0;
}
