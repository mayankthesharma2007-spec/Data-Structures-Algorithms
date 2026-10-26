class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_pts=0;
        int low = 0;
        int high = cardPoints.size()-k-1;
        int current = 0;
        for(int i= 0;i<cardPoints.size();i++){
            total_pts+=cardPoints[i];
            if(i<=high){
                current+=cardPoints[i];
            }
        }
        int answer = INT_MIN;
        if(k==cardPoints.size()){
            return total_pts;
        }
        while(low<=high){
            answer = max(answer,total_pts-current);
            current-=cardPoints[low];
            low++;
            if(high!=cardPoints.size()-1){
                high++;
                current+=cardPoints[high];
            }
            else{
                break;
            }
        }
        return answer;
    }
};