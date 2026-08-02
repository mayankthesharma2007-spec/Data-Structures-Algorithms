class Solution {
public:
    bool status_checker(vector<int>& bloomDay,int mid,int m,int k){
        int count = 0;
        for(int i = 0;i<bloomDay.size();i++){
            if(bloomDay[i]>mid){
                count = 0;
            }
            else if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    m--;
                    count = 0;
                }
                if(m==0){
                    return true;
                }
            }
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
      if(bloomDay.size()<(long long)m*k){
        return -1;
      }
      long long low = INT_MAX;
      long long high = INT_MIN;
      for(int i = 0;i<bloomDay.size();i++){
        if(low>bloomDay[i]){
            low=bloomDay[i];
        }
        if(high<bloomDay[i]){
            high = bloomDay[i];
        }
      }
      long long answer=INT_MAX;
      while(low<=high){
        long long  mid = low+(high-low)/2;
        if(status_checker(bloomDay,mid,m,k)==true){
            high = mid-1;
            answer=min(mid,answer);
        }
        else{
            low = mid+1;
        }
      }
    return answer;
    }
};