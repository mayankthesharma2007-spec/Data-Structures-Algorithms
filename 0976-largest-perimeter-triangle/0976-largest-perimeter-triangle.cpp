class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int sum = 0;
        vector <int> vs;
        sort(nums.begin(),nums.end());
        for(int i = nums.size()-1; i>=2; i--){
            if(nums[i-1]+nums[i-2]>nums[i]){
                vs.emplace_back(nums[i]);
                vs.emplace_back(nums[i-1]);
                vs.emplace_back(nums[i-2]);
                break;
            }
        }
        if(vs.size()==0){
            return 0;
        }
        for(auto it = vs.begin(); it!= vs.end(); it++){
            sum = sum + *(it);
        }
        if(vs.size()==3){
            return sum;
        }
        return {};
    }
};