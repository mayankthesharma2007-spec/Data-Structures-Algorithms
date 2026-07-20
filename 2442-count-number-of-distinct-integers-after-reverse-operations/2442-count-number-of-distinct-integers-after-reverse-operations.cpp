class Solution {
public:
    int Reverse(int k){
        int rev = 0;
        while(k>0){
            rev*=10;
            rev+=k%10;
            k=k/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int , int> mpp;
        int count = 0;
        for(int i  =0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==1){
                count++;
            }
        }
        for(int i = 0;i<nums.size();i++){
            int Rev=Reverse(nums[i]);
            if(mpp.find(Rev)==mpp.end()){
                count++;
            }
            mpp[Rev]++;
        }
        return count;  
    }
};