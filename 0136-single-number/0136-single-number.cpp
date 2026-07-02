class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sws = 0;
        for(int i = 0; i<nums.size();i++){
            sws=sws^nums[i];
        }
        return sws;
    }
};