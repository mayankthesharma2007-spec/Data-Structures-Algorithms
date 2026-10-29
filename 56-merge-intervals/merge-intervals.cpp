class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> answer;
        int i = 0;
        while(i<intervals.size()){
            if(answer.empty() || answer.back()[1]<intervals[i][0]){
                answer.push_back(intervals[i]);
            }
            else{
                answer.back()[1]=max(answer.back()[1],intervals[i][1]);
            }
            i++;
        }
        return answer;
    }
};