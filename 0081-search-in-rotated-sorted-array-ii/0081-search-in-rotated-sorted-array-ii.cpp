class Solution {
public:
    int BinarySearch(vector<int> &array,int k){
        int low = 0;
        int high = array.size()-1;
        while(low<=high){
        int mid = (low + high)/2;
        if(array[mid]==k){
            return true;
        }
        else if(array[low]==array[mid] && array[mid] == array[high]){
            low++;
            high--;
            continue;
        }
        if(array[low]<=array[mid]){
            if(array[low]<= k && array[mid]>=k){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(array[mid]<= k && array[high]>=k){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        return BinarySearch(nums,target);
    }
};