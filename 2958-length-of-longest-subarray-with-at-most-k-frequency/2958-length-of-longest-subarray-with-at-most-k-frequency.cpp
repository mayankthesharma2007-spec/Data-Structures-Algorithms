class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int maxi = 1;
        unordered_map<int,int> mpp;
        while(high<nums.size()){
            mpp[nums[high]]++;
            if(mpp[nums[high]]<=k){
                maxi = max(maxi, high-low+1);
            }
            else{
                while(mpp[nums[high]]>k){
                    mpp[nums[low]]--;
                    low++;
                }
            }
            high++;         
        }
        return maxi;
    }
};