class Solution {
public:
    bool BinarySearch(vector<int> &array, int k){
        int low=0;
        int high=array.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(array[mid]==k){
                return true;
            }
            else if(array[mid]>k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int partition=-1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                partition=i-1;
                break;
            }
        }
        if(partition==-1){
            return BinarySearch(nums,target);
        }
        else{
            reverse(nums.begin(),nums.begin()+partition+1);
            reverse(nums.begin()+partition+1,nums.end());
            reverse(nums.begin(),nums.end());
        }
        return BinarySearch(nums,target);
    }
};