class Solution {
public:
    int maximumLengthSubstring(string s) {
        int low = 0;
        int high = 0;
        int answer = 0;
        unordered_map<char,int> mpp;

        while (high < s.size()) {
            if (mpp[s[high]] == 2) {
                mpp[s[low]]--;
                low++;
            }
            else {
                mpp[s[high]]++;
                answer = max(answer, high - low + 1);
                high++;
            }
        }

        return answer;
    }
};