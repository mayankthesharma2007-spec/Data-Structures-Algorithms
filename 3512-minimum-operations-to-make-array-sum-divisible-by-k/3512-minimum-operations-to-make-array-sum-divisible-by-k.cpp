class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();

        for (int x = 0; x < n; x++) { 
            sum += nums[x];
        }
        return sum % k; 

    }
};