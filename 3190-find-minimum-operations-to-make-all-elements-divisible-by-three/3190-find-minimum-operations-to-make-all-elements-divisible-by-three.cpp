class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops = 0;
        for(int i=0;i<nums.size();i++){
            int cond = (3-nums[i]%3);
            if(nums[i]%3!=0){
                ops += min(cond, nums[i]%3);
            }
        }
        return ops;
    }
};