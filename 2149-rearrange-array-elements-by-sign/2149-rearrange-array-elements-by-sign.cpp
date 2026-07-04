class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> answer(nums.size());
        int positive= 0;
        int negative = 1;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]>0){
                answer[positive]=nums[i];
                positive+=2;
            }
            else if(nums[i]<0){
                answer[negative]=nums[i];
                negative+=2;
            }
        }
        return answer;
    }
};