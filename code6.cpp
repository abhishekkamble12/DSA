#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    cout<<"finding the smallest missing element in the given array"<<endl;
    int arr[5] ={-8, 0, -1, -4, -3};
    vector<int> vec ;
    int n= sizeof(arr)/sizeof(arr[0]);

    int st =0;
    int ed =1;
   sort(arr, arr + n);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
    while(ed < n){
        // if()
        if(arr[st] >0){
            // we add the diff to vec
            int dif = arr[ed] - arr[st];
            if(dif > 1){
                vec.push_back(dif);
            }
        }
        ed ++;
        st++;
    }

    for(auto it =vec.begin();it<vec.end();it++){

        cout<<*(it)<<endl;
    }
    // int a = vec.size() > 0 ? *(vec.begin()) : -1;
    cout<<"the smallest difference is : "<<vec.at(0)<<endl;

}