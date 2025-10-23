#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creating the multidimensional array
    // vector<vector<int>> matrix(3, vector<int>(4));

    // // assigning value 8 to each element
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //        cout<<"enter the value to the matrix";
    //         cin>>matrix[i][j]; // <-- corrected here
    //     }
    // }

    // // printing the matrix
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cout << matrix[i][j] ;
    //     }
    //     cout<<" "<<endl;
    // }
    //  for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << matrix[j][i] ;
    //     }
    //     cout<<" "<<endl;
    // }

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    // for the ranspose of the matrix what we have to do
    vector<vector<int>> transpose(4, vector<int>(4));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            transpose[j][i] = matrix[i][j];
        }
    }
    cout << "ORGINAL MATIRX" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j];
        }
        cout<<""<<endl;
    }
    cout << "transpose :" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << transpose[i][j];
        }
        cout<<" "<<endl;
    }

    return 0;
}