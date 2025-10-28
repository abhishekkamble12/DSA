// optimize
class Solution {
public:
    int countValidSelections(vector<int>& nums) {
     
        int totalsum=0;
        for(int i=0;i<nums.size();i++){
            totalsum +=nums[i];
        }
        int leftsum=0;
        int rightsum=0;
        int res=0;
        // caluclating the left and roght 
        for( int i=0;i<nums.size();i++){
            if(nums[i]==0){
                rightsum=totalsum-leftsum;
                if(leftsum == rightsum){
                    res+=2;
                }
                else{
                    if(abs(leftsum-rightsum)==1){
                       res+=1;
                    }

                }

            }
            leftsum+=nums[i];

        }
        return res;
    }
};