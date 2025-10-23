#include <iostream>
#include <climits> // For INT_MIN
using namespace std;
int main(){
    cout<<"check if the array divdie in equal sum of elements"<<endl;
    // int arr[7] = {13, -4, 5, 4, -1, 7, -8};
    int arr[8] = {3, 4, -5, 8, 12, 7, 6,2};

    // logic :-ki total sum mein subarray ko minus karo
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    for(int i=0;i<n;i++){
        // calculating the sum of the half subarray 
        sum +=arr[i];

    }
    cout<<"total sum of the array is :"<<sum<<endl;

    // diving the entire array in the subarray 
    // logic : start sub from first elemtn
    // check if the sum is half of the entiee sum
    int sum1 =0;
    for(int i=0;i<n;i++){
        sum1 += arr[i];
        if(sum1 == (sum)/2){
            cout<<"true "<<endl;
            cout<<"the lastindex is "<<i<<endl;
        }
    }




}