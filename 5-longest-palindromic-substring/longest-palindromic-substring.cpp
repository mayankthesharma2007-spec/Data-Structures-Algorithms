class Solution {
public:
    void expandAroundCenter(const string s, int l, int r, int &start, int &maxLen){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            l--;
            r++;
        }
        if(maxLen<r-l-1){
            start = l+1;
            maxLen=r-l-1;
        }
    }
    string longestPalindrome(string s) {
        if(s.empty()){
            return "";
        }
        int start= -1;
        int maxLen = INT_MIN;
        for(int i = 0;i<s.size();i++){
            expandAroundCenter(s,i,i,start,maxLen);
            expandAroundCenter(s,i,i+1,start,maxLen);
        }
        return s.substr(start,maxLen);
    }
};