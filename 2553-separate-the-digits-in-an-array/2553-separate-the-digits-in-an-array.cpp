class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        list<int> temp;
        vector<int> answer;
        for(int i=nums.size()-1;i>=0;i--){
            while(nums[i]>0){
                temp.emplace_front(nums[i]%10);
                nums[i]=nums[i]/10;
            }
        }
        for(auto it = temp.begin();it!=temp.end();it++){
            answer.emplace_back(*(it));
        }
        return answer;
    }
};