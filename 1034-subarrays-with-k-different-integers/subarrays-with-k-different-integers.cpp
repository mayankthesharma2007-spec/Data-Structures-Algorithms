class Solution {
public:
    int answer_solver(vector<int> &nums , int k){
        if(k<0){
            return 0;
        }
        int answer = 0;
        int l = 0;
        int r = 0;
        unordered_map<int,int> mpp;
        while(r<nums.size()){
            mpp[nums[r]]++;
            if(mpp.size()>k){
                while(mpp.size()>k){
                    mpp[nums[l]]--;
                    if(mpp[nums[l]]==0){
                        mpp.erase(nums[l]);
                    }
                    l++;
                }
            }
            answer+=r-l+1;
            r++;
        }
        return answer;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return answer_solver(nums,k) - answer_solver(nums,k-1);  
    }
};