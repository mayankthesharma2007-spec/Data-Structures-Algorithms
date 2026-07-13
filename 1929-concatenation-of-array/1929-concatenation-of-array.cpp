class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer;
        int i = 0;
        while(i <2){
            for(int j = 0 ; j < nums.size(); j++){
                answer.emplace_back(nums[j]);
            }
            i++;
        }
        return answer;
    }
};