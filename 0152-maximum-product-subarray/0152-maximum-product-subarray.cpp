class Solution {
public:
    int maxProduct(vector<int>& nums) { 
        int maxi=INT_MIN;
        int prefix=1;
        int suffix=1;
        for(int i = 0;i<nums.size();i++){
            prefix*=nums[i];
            maxi=max(maxi,prefix);
            suffix*=nums[nums.size()-1-i];
            maxi=max(maxi,suffix);
            if(suffix==0){
                suffix=1;
            }
            if(prefix==0){
                prefix=1;
            }
        }
        return maxi;
    }
};