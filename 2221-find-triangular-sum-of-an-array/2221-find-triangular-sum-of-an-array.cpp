class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()!=1){
            vector <int> temp;
            for(int i=0;i<nums.size()-1;i++){
                int sum = nums[i]+nums[i+1];
                if(sum<10){
                    temp.push_back(sum);
                }
                else{
                    sum=sum%10;
                    temp.push_back(sum);
                }
            }
            nums=temp;
        }
        return nums[0];
    }
};