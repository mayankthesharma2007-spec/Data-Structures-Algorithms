class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l1,j=-1;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==0){
                l1=i;
                break;
            }
        }
        j=l1+1;
        while(j<nums.size()){
            if(nums[j]!=0){
                swap(nums[l1],nums[j]);
                j++;
                l1++;
            }
            else if(nums[j]==0){
                j++;
            }
        }
    }
};