class Solution {
public:
    bool warmth_checker(vector<int>& houses,int mid,vector<int> &heaters){
        int left = 0;
        int right = 0;
        while(left<houses.size()){
            while(right<heaters.size() && heaters[right] + mid < houses[left]){
                right++;
            }
            if(right<heaters.size() && abs(houses[left]-heaters[right])<=mid){
                left++;
            }
            else{
                return false;
            }
        }
        return true;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int low = 0;
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int high = max(houses.back(),heaters.back());
        int answer = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(warmth_checker(houses,mid,heaters)==true){
                high=mid-1;
                answer = min(mid,answer);
            }
            else{
                low = mid+1;
            }
        }
        return answer;
    }
};