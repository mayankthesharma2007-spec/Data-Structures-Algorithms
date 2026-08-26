class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int low = 0, high = 0, count = 0;
        string answer = "";

        while (high < s.size()) {
            if (s[high] == '1') {
                count++;
            }

            while (count == k) {
                string current = s.substr(low, high - low + 1);
                
                if (answer.empty() || current.length() < answer.length() || 
                   (current.length() == answer.length() && current < answer)) {
                    answer = current;
                }

                if (s[low] == '1') {
                    count--;
                }
                low++;
            }

            high++;
        }
        return answer;
    }
};