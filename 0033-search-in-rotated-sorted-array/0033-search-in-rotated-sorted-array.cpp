class Solution {
public:
    int BinarySearch(vector<int> &array,int k,int low , int high){
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
        int partition=-1;
        for(int i = 0; i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                partition=i;
                break;
            }
            if(nums[i+1]>nums[i] && i==nums.size()-2){
                partition=nums.size()-1;
            }
        }
        int ans1 = BinarySearch(nums,target,0,partition);
        int ans2 = BinarySearch(nums,target,partition+1,nums.size()-1);
        if(ans1 == -1 && ans2 == -1){
            return -1;
        }
        else{
            if(ans1==-1){
                return ans2;
            }
            else if(ans2==-1){
                return ans1;
            }
        }
        return {};
    }
};