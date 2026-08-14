class Solution {
public:
    int maximumLengthSubstring(string s) {
        int low = 0;
        int high = 0;
        int answer = INT_MIN;
        unordered_map<char,int> mpp;
        while(high<s.size()){
            mpp[s[high]]++;
            while(mpp[s[high]]>2){
                mpp[s[low]]--;
                low++;
            }
            answer=max(answer,high-low+1);
            high++;
        }
        return answer;
    }
};