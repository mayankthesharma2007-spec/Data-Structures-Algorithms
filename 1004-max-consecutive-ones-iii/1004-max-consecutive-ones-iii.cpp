class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int low = 0;
        int high = 0;
        int length = INT_MIN;
        while(high<nums.size()){
            if(nums[high]==0){
                count++;
            }
            while(count>k){
                if(nums[low]==0){
                    count--;
                }
                low++;
            }
            length = max(length, high-low+1);
            high++;
        }
        return length;
    }
};