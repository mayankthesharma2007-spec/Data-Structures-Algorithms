class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int answer = INT_MAX;
        for(int i = l ; i <= r ;i++){
            int sum = 0;
            int f = i-1;
            int b = 0;
            for(int j = b;j<=f;j++){
                sum+=nums[j];
            }
            if(sum>0){
                answer=min(sum,answer);
            }
            if(f<nums.size()){
                f++;
            }
            while(f<nums.size()){
                sum+=nums[f];
                sum-=nums[b];
                if(sum>0){
                    answer=min(answer,sum);
                }
                f++;
                b++;
            }
        }
        if(answer==INT_MAX){
            return -1;
        }
        return answer;
    }
};