class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        for(int i = 0;i<intervals.size();i++){
            if(answer.empty() || intervals[i][0]>answer.back()[1]){
                answer.push_back(intervals[i]);
            }
            else{
                answer.back()[1]=max(intervals[i][1], answer.back()[1]);
            }
        }
        return answer;
    }
};