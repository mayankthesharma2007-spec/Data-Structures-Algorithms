class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini_ind=0;
        int maxi_ind=0;
        for(int i=0;i<nums.size();i++){
            if(nums[maxi_ind]<nums[i]){
                maxi_ind = i;
            }
            if(nums[mini_ind]>nums[i]){
                mini_ind = i;
            }
        }
        if(mini_ind >= nums.size()/2 && maxi_ind >= nums.size()/2){
            return (nums.size())-min(mini_ind,maxi_ind);
        }
        else if(mini_ind <= nums.size()/2 && maxi_ind <= nums.size()/2){
            return max(mini_ind,maxi_ind)+1;
        }
        else{
           int left_ind = min(maxi_ind,mini_ind);
           int right_ind = max(mini_ind,maxi_ind);
           int both = left_ind + 1 + nums.size() - right_ind;
           int front = right_ind + 1;
           int back = nums.size()-left_ind;
           return min(both, min(front,back));
        }
        return -1;
    }
};