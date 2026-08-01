class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxi=INT_MIN;
        vector<int> answer;
        for(int i = 0;i<nums.size();i++){
            int temp = nums[i];
            int large = INT_MIN;
            int small = INT_MAX;
            while(temp>0){
                int d = temp%10;
                large=max(large,d);
                small=min(small,d);
                maxi=max(maxi,(large-small));
                temp=temp/10;
            }
            answer.push_back(large-small);
        }
        int sol = 0;
        for(int i = 0;i<answer.size();i++){
            if(answer[i]==maxi){
                sol+=nums[i];
            }
        }
        return sol;
    }
};