class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum = 0;
        int l=0;
        int r =nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<r){
            sum+=nums[l];
            sum+=nums[r];
            maxi=max(maxi,sum);
            sum=0;
            l++;
            r--;
        }
        return maxi;
    }
};