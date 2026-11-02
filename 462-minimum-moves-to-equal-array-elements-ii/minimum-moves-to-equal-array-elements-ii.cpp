class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int answer = 0;
        int count = 0;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n%2==0){
            count = (nums[(n/2)-1] + nums[n/2])/2;
        }
        else{
            count = nums[((n+1)/2)-1];
        }
        for(int i = 0;i<n;i++){
            answer+=abs(count-nums[i]);
        }
        return answer;
    }
};