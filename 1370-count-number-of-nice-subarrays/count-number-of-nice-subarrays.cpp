class Solution {
public:
    int answer_solver(vector<int> &nums , int k){
        int answer = 0;
        int l = 0;
        int r = 0;
        int count = 0;
        while(r<nums.size()){
            if(nums[r]%2!=0){
                count++;
            }
            if(count > k){
                while(count > k){
                    if(nums[l]%2!=0){
                        count--;
                    }
                    l++;
                }
            }
            answer+=r-l+1;
            r++;
        }
        return answer;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return answer_solver(nums,k) - answer_solver(nums,k-1);
    }
};