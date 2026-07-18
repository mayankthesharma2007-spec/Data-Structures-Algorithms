class Solution {
public:
    int BinarySearch(vector<int> &array,int k){
        int low =0;
        int high = array.size()-1;
        while(low<=high){
        int mid = (low + high)/2;
        if(array[mid]==k){
            return mid;
        }
        else if(array[mid]>k){
            high = mid-1;
        }
        else{
            low=mid+1;
        }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int solution = BinarySearch(nums,target);
        return solution;
    }
};