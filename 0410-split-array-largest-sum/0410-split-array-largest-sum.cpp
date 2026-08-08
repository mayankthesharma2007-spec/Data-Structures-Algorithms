class Solution {
public:
    bool status_checker(vector<int>& nums, int mid, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > mid) {
                k--;
                sum = nums[i];
            } else {
                sum += nums[i];
            }
            if(k<=0){
                return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = INT_MIN;
        int high = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (low < nums[i]) {
                low = nums[i];
            }
            high += nums[i];
        }
        int answer = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (status_checker(nums, mid, k) == true) {
                high = mid - 1;
                answer = mid;
            } else {
                low = mid + 1;
            }
        }
        return answer;
    }
};