class Solution {
public:
    bool status_checker(vector<int> &weights, int mid, int days){
        int sum = 0;
        for(int i= 0;i<weights.size();i++){
            if(mid<weights[i]){
                return false;
            }
            if(sum+weights[i]>mid){
                days--;
                sum=weights[i];
            }
            else{
                sum+=weights[i];
            }
            if(days<=0){
                return false;
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long  low = 1;
        long long  high = INT_MAX;
        long long  answer = INT_MAX;
        while(low<=high){
            long long  mid = low + (high-low)/2;
            if(status_checker(weights,mid,days)==true){
                high=mid-1;
                answer=min(mid,answer);
            }
            else{
                low=mid+1;
            }
        }
        return answer;
    }
};