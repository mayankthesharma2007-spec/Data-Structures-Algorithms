class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int left = 0;
        while(left< nums.size()){
            if(nums[left]!=target[left]){
                break;
            }
            else{
                left++;
            }
        }
        if(left==nums.size()){left=nums.size()-1;}
        int right = 0;
        for(int i = target.size()-1;i>0;i--){
            if(target[i-1]<target[i]){
                right = i;
                break;
            }
        }
        unordered_map<int,int> freq;
        int mismatch = 0;
        int answer = 0;
        auto add = [&](int val , int count){
            if(freq[val]==0){
                mismatch++;
            }
            freq[val]+=count;
            if(freq[val]==0){
                mismatch--;
            }
        };
        for(int i = target.size()-1; i>=right; i--){
            add(nums[i],1);
            add(target[i],-1);
            if(i<= left && mismatch==0){
                answer++;
            }
        }
        return answer;
    }
};