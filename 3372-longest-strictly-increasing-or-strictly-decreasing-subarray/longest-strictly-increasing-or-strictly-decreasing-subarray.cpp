class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int answer = 0;
        int l = 0;
        int r  = 1;
        while(r<nums.size()){
            if(nums[r]>nums[r-1]){
                answer=max(answer,r-l+1);
            }
            else{
                l=r;
            }
            r++;
        }
        r=1;
        l=0;
        while(r<nums.size()){
            if(nums[r]<nums[r-1]){
                answer=max(answer,r-l+1);
            }
            else{
                l=r;
            }
            r++;
        }
        if(!answer){
            return 1;
        }
        return answer;
    }
};