class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==(nums.size()/3)+1){
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};