class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
        int sum2=0;
        for(int i = 0;i<nums.size()-1;i++){
            sum2+=nums[i];
            sum-=nums[i];
            if(abs(sum2-sum)%2==0){
                count++;
            }
        }
        return count;
    }
};