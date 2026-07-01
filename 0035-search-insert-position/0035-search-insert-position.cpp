class Solution {
public:
    int  BinarySearch(vector <int> &array, int k){
        int low = 0;
        int high = array.size()-1;
        while(low <=high){
            int mid = (low+high)/2;
            if(array[mid]==k){
                return mid;
            }
            else if(array[mid]>k){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return BinarySearch(array,k+1);
    }
    int searchInsert(vector<int>& nums, int target) {
        if(target <= nums[0]){
            return 0;
        }
        else if(target > nums[nums.size()-1]){
            return nums.size();
        }
        else if(target == nums[nums.size()-1]){
            return nums.size()-1;
        }
        else{
            return BinarySearch(nums,target);
        }
        return {};
    }
};