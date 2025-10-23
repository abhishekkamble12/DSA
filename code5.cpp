#include <iostream>
#include <vector>
using namespace std;
void checkfunc(int arr1[], int n, int total_sum)
{
    for (int i = 0; i < n; i++)
    {
        int su = 0;
        for (int k = 0; k <= i; k++)
        {
            su += arr1[k];
        }
        if (su == (total_sum) / 2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
int main()
{
    //  creating the array

    vector<int> arr;
    int n = 8;
    int arr1[8] = {3, 4, -2, 5, 8, 20, -10, 8};
    //  prefix
    vector<int> arr2;
    arr2.push_back(arr1[0]);
    for (int i = 1; i < n; i++)
    {
        // prefix sum add karte jaao
        // previous element ko add karke sum print karo
        int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += arr1[j];
        }
        // now add the sum
        arr2.push_back(sum);
    }
    cout << "pahe 1 done" << endl;

    // printing the vector arr2
    // creating the iterators
    vector<int>::iterator it;
    for (it = arr2.begin(); it < arr2.end(); it++)
    {
        cout << *(it) << endl;
    }

    // finding if the array dividing two equal sum
    // finding the total sum
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr1[i];
    }
    cout << "  " << endl;
    cout << "total sum :-" << total_sum << endl;
    checkfunc(arr1, n, total_sum);
}