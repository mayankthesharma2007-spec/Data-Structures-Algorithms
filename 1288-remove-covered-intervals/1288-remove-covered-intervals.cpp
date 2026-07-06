class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int i = 0;
        int j = 1;
        sort(intervals.begin(),intervals.end());
        while(j<intervals.size()){
            if(intervals[i][0]==intervals[j][0] && intervals[i][1]<=intervals[j][1] && i!=j){
                intervals.erase(intervals.begin()+i);
            }
            else if(intervals[i][0]<intervals[j][0] && intervals[i][1]>=intervals[j][1] && i!=j){
                intervals.erase(intervals.begin()+j);
            }
            else{
                i++;
                j++;
            }
        }
        return intervals.size();
    }
};