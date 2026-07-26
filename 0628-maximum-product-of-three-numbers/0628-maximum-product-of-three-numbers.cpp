class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int num1 = nums[0]*nums[1]*nums[nums.size()-1];
        int num2 = nums[nums.size()-3]*nums[nums.size()-2]*nums[nums.size()-1];
        return max(num1,num2);
    }
};