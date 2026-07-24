class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]>=k){
                count++;
            }
        }
        return nums.size()-count;
    }
};