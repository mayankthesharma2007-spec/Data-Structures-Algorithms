class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            if(mini>nums[i]){
                mini = nums[i];
            }
        }
        int answer = 0;
        for(int i = 0;i<nums.size();i++){
            answer += nums[i]-mini;
        }
        return answer;
    }
};