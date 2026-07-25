class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;
        int answer=INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[low]<=arr[high]){
                answer=min(answer,arr[low]);
                return answer;
            }
            if(arr[low]<=arr[mid]){
                answer=min(answer,arr[low]);
                low=mid+1;
            }
            else{
                answer=min(answer,arr[mid]);
                high = mid-1;
            }
        }
        return answer;   
    }
};