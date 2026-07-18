class Solution {
public:
    int findGCD(vector<int>& nums) {
        int N1 = nums[0];
        int N2 = nums[0];
        for(int i = 0;i<nums.size();i++){
            if(N1<nums[i]){
                N1=nums[i];
            }
            if(N2>nums[i]){
                N2=nums[i];
            }
        }
        while(N2!=0){
            int temp = N1%N2;
            N1=max(N2,temp);
            N2=min(N2,temp);
        }
        return N1;
    }
};