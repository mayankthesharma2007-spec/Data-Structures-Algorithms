class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> answer;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i = 1;i<=nums.size();i++){
            if(mpp.find(i)==mpp.end()){
                answer.emplace_back(i);
            }
        }
        return answer;
    }
};