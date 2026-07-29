class Solution {
public:
    bool status_checker(vector<int> &nums, int mid, int k){
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%mid==0){
                sum+= nums[i]/mid;
            }
            else{
                sum+= nums[i]/mid;
                sum++;
            }
            if(sum>k){
                return false;
            }
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = INT_MAX;
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(status_checker(nums,mid,threshold)==true){
                ans=min(ans,mid);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};