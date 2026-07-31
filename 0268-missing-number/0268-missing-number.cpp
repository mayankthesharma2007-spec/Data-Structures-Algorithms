class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> hash_set(nums.size()+1,0);
        for(int i = 0;i<nums.size();i++){
            hash_set[nums[i]]=1;
        }
        for(int i = 0;i<hash_set.size();i++){
            if(hash_set[i]==0){
                return i;
            }
        }
        return -1;
    }
};