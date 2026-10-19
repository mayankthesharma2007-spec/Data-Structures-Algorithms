class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long  XOOR = 0;
        for(int i = 0;i<nums.size();i++){
            XOOR^=nums[i];
        }
        int right = (XOOR&(XOOR-1))^XOOR;
        int ans1 = 0;
        int ans2 = 0;
        for(int i = 0;i<nums.size();i++){
            if(right&nums[i]){
                ans1^=nums[i];
            }
            else{
                ans2^=nums[i];
            }
        }
        return {ans1,ans2};
    }
};