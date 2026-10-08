class Solution {
public:
    vector<vector<int>> answer;
    void solve(vector<int> &curr, vector<int> &nums, int k){
        if(k==nums.size()){
            answer.push_back(curr);
            return;
        }
        curr.push_back(nums[k]);
        solve(curr,nums,k+1);
        curr.pop_back();
        solve(curr,nums,k+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        solve(curr,nums,0);
        return answer;
    }
};