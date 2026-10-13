class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(),nums.end(),[](int a, int b){
            return abs(a)<abs(b);
        });
        long long  answer =0;
        for(int i = 0;i<nums.size();i++){
            if(i<nums.size()/2){
                answer-=nums[i]*nums[i];
            }
            else{
                answer+=nums[i]*nums[i];
            }
        }
        return answer;
    }
};