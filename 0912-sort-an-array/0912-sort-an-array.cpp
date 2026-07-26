class Solution {
public:
    void merge(vector<int> &array, int low, int mid, int high){
        int right = mid+1;
        int left  = low;
        vector<int> temp;
        while(low<=mid && right<=high){
            if(array[low]<=array[right]){
                temp.push_back(array[low]);
                low++;
            }
            else{
                temp.push_back(array[right]);
                right++;
            }
        }
        while(low<=mid){
            temp.push_back(array[low]);
            low++;
        }
        while(right<=high){
            temp.push_back(array[right]);
            right++;
        }
        for(int i = left;i<=high;i++){
            array[i]=temp[i-left];
        }
    }
    void mergeSort(vector<int> &array, int low, int high){
        if(low>=high){
            return;
        }
        int mid = (low+high)/2;
        mergeSort(array,low,mid);
        mergeSort(array,mid+1,high);
        merge(array,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};