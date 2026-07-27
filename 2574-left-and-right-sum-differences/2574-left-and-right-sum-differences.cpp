class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
        int left = 0;
        int sum2=0;
        if(left==0){
            answer.push_back(abs(nums[left]-sum));
            sum-=nums[left];
            sum2+=nums[left];
            left++;
        }
        while(left<nums.size()){
            sum-=nums[left];
            answer.push_back(abs(sum2-sum));
            sum2+=nums[left];
            left++;
        }
        return answer;
    }
};