class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> answer;
        int l1 = 0;
        int h1 = nums.size() - 1;
        if (nums.size() == 1) {
            if (nums[0] != val) {
                return nums.size();
            } else if (nums[0] == val) {
                nums.erase(nums.begin());
                return nums.size();
            }
        }
        while (l1 <= h1) {
            while (l1 < h1) {
                if (nums[l1] != val) {
                    answer.emplace_back(nums[l1]);
                }
                l1++;
                if (nums[h1] != val) {
                    answer.emplace_back(nums[h1]);
                }
                h1--;
            }
            if (l1 == h1) {
                if (nums[l1] != val) {
                    answer.emplace_back(nums[l1]);
                }
                l1++;
            }
        }
        nums.erase(nums.begin(), nums.end());
        for (int i = 0; i < answer.size(); i++) {
            nums.emplace_back(answer[i]);
        }
        return nums.size();
    }
};