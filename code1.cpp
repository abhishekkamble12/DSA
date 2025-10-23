#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // std::cout << "hello world"; // Commented out line
    cout << "hello" << endl;
    // ceating the vector 
    vector<int> vec(4, 10);
    // iterators
    // begin and end
    // vector<int>::iterator it;
    //    it is used for the looping or the vector
    for  (auto  it = vec.begin(); it != vec.end(); it++)
    {
        cout << "deferencing" << "  " << *(it) << endl;
    }
    return 0;
}