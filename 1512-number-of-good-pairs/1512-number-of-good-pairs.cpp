class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 1;
        int answer=0;
        int final=0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1] && i==nums.size()-2){
                count++;
                answer=(count * (count-1))/2;
                final+=answer;
                return final;
            }
            if(nums[i]==nums[i+1]){
                count++;
            }
            else if(nums[i]!=nums[i+1]){
                answer=(count * (count-1))/2;
                final+=answer;
                count=1; 
            }
        }
        return final;  
    }
};