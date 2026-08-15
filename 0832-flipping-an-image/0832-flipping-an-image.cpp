class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& nums) {
        for(int i=0;i<nums.size();i++){
            int low = 0;
            int high = nums[i].size()-1;
            while(low<=high){
                swap(nums[i][high],nums[i][low]);
                if(nums[i][high]==0){
                    nums[i][high]=1;
                }
                else if(nums[i][high]==1){
                    nums[i][high]=0;
                }
                if(low!=high && nums[i][low]==0){
                    nums[i][low]=1;
                }
                else if(low!=high && nums[i][low]==1){
                    nums[i][low]=0;
                }
                low++;
                high--;
            }
        }
        return nums;
    }
};