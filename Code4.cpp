#include <iostream>
using namespace std;

int main() {
  cout<<"Two sum Problem"<<endl;
  int arr[5] ={2,7,11,15,27};
  int target =22;

//   using brute force
for(int i=0;i<5;i++){
    int s =arr[i];
    int sum =s;
    for(int j=i+1;j<5;j++){
      sum +=arr[j];
       if(sum == target){
        cout <<"true";
        cout<<"the index "<<i<<" "<<j<<endl;

       }
       else{
        s =0;
        sum = arr[i];
       } 


    }
}

}