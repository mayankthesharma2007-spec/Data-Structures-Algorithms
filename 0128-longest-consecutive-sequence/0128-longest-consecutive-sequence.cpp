class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lastsmallest=INT_MIN;
        int current_count=0;
        int largest=1;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>lastsmallest && lastsmallest==nums[i]-1){
                current_count++;
                lastsmallest=nums[i];
                largest=max(current_count,largest);
            }
            else if(nums[i]>lastsmallest){
                lastsmallest=nums[i];
                current_count=1;
            }
        }
        if(nums.size()==0){
            return 0;
        }
        return largest;
    }
};