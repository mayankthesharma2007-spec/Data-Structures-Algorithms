class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<vector<int>> answer;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        while(!mpp.empty()){
            vector<int>temp;
            vector<int>toErase;
            for(auto& it: mpp){
                if(it.second>=1){
                    temp.push_back(it.first);
                    it.second --;
                }
                if(it.second == 0){
                    toErase.push_back(it.first);
                }
            }
            answer.push_back(temp);
            for(int key : toErase) {
                mpp.erase(key);
            }
        }
        return answer;
    }
};