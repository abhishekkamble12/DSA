#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void printfun(int arr[][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
    }
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // printing the two dimnesional array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << "  " << endl;
    // col wise
    // calling the print function
    printfun(arr);

    cout << "printting the sum of the array" << endl;
    int arr2[3][4] = {18, 19, 17, 16, 15, 14, 12, 11, 13, 10, 9, 8};
    int arr3[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];

        }
    }
    printfun(arr3);

    // finding the row with the largest sum
    int sum = INT_MIN;
    for(int i=0;i<3;i++){
        int total=0;
        for(int j=0;j<4;j++){
            total += arr[i][j];

        }
        if(total > sum){
            sum =total;
        }
    }
    cout<<"the largest sum of the array is :"<<sum<<endl;


    int ar [4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};
    // what to do now??
    // finc the sum of the diagona element 
    // left diagonal element
    int s1=0;
    for(int i=0;i<4;i++){
        for(int k=0;k<4;k++){
            if(i == k){
                s1 += ar[i][k];
            }

        }
    }
    cout <<" the sume of left diagonal is "<<s1<<endl;


    // right diagnonal 
    int s2=0;
    int j =3;
    int i=0;
     while(j >=0){
            s2 += ar[i][j];
            j--;
            i++;
        }
        cout<<"right diagnoal sum "<<s2<<endl;

}