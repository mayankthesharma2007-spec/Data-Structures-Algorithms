class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n1 = nums[0]*nums[1];
        int  n2 = nums[nums.size()-1]*nums[nums.size()-2];
        return n2-n1;   
    }
};