class Solution {
public:
    bool check_number(vector<int>&nums,int i){
        for(int j = 0;j<nums.size();j++){
            if(nums[j]==i){
                return true;
            }
        }
        return false;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        vector<int> answer;
        for(int i= 0;i<nums.size();i++){
            if(mini>nums[i]){
                mini = nums[i];
            }
            if(maxi<nums[i]){
                maxi = nums[i];
            }
        }
        for(int i = mini;i<=maxi;i++){
            if(check_number(nums,i)==false){
                answer.push_back(i);
            }
        }
        return answer;
    }
};