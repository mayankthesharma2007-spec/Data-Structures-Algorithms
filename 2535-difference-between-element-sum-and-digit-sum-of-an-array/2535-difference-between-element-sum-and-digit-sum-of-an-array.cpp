class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int answer=0;
        for(int i = 0;i<nums.size();i++){
            answer+=nums[i];
            while(nums[i]>0){
                answer=answer-(nums[i]%10);
                nums[i]=nums[i]/10;
            }
        }
        return answer;
    }
};