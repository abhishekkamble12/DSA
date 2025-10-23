#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> store = {10, 20, 30, 40, 50};

    // Declare an iterator
    std::vector<int>::iterator it;

    // Loop through the vector using the iterator
    for (it = store.begin(); it != store.end(); ++it) {
        // dereferencing the it
        std::cout << *(it) << std::endl;
    }

    return 0;
}
