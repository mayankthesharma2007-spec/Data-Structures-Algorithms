class Solution {
public:
    bool speed_checker(vector<int>&piles, int mid,int h){
        for(int i = 0;i<piles.size();i++){
            if(mid>=piles[i]){
                h--;
            }
            else{
                if(piles[i]%mid==0){
                    h= h - ((piles[i])/mid);
                }
                else{
                    h= h - ((piles[i])/mid);
                    h--;
                }
            }
            if(h<0){
                return false;
            }
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long  low = 1;
        long long  high = INT_MAX;
        long long  answer = INT_MAX;
        while(low<=high){
            long long  mid = low + (high-low)/2;
            if(speed_checker(piles,mid,h)==true){
                answer=min(mid,answer);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return answer;
    }
};