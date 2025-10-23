#include<iostream>
#include<vector>
using namespace std;
int main(){
      vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
        // transversing throught the array
        int targt =11;
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<4;j++){
        //         if(matrix[i][j] ==targt){
        //             cout<<i<<j<<endl;
        //         }
        //     }
        // }

        // optimize approach
        // only check the row which statisfy the  condition
        // if(matrix[i][m-1] <= target <=arr[i][m-1])
        for(int i=0;i<4;i++){
            if(matrix[i][0] <= targt && targt <= matrix[i][3]){
                int start =0;
                int end =4-1;
                int mid ;
            
                while(start <= end){
                    mid =(start + end)/2;
                    if(matrix[i][mid] ==  targt){
                        printf("yes");
                        break;

                    }
                   if(targt > matrix[i][mid]){
                    start =mid +1;

                   }
                   else{
                    end = mid -1;
                   }
                }

            }
            
        }
}