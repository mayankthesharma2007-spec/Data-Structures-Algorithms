class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(maxi<nums[i]){
                maxi = nums[i];
            }
        }
        int answer = 0;
        for(int i = 0;i<nums.size();i++){
            answer+=maxi-nums[i];
        }
        return answer;
    }
};