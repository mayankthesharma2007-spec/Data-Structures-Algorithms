class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> answer;
        int low = 0;
        int high = n;
        while(high<nums.size()){
            answer.push_back(nums[low]);
            answer.push_back(nums[high]);
            low++;
            high++;
        }
        return answer;
    }
};