class Solution {
public:
    int digit(int k){
        int count = 0;
        while(k>0){
            count+=k%10;
            k/=10;
        }
        return count;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            if(i==digit(nums[i])){
                return i;
            }
        }
        return -1;
    }
};