class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int answer = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums.size()%(i+1)==0){
                answer+=pow(nums[i],2);
            }      
        }
        return answer;
    }
};