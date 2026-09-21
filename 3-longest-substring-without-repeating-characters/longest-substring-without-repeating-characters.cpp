class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 1;
        int l = 0;
        int r = 0;
        unordered_map<char, int> mpp;
        if(s.size()==0){
            return 0;
        }
        while(r<s.size() && l<s.size()){
            if(mpp[s[r]]==0){
                mpp[s[r]]++;
                maxi=max(maxi,r-l+1);
                r++;
            }
            else if(mpp[s[r]]>0){
                if(s[l]==s[r] && l!=r){
                    l++;
                    mpp[s[r]]--;
                }
                else{
                    mpp[s[l]]--;
                    l++;
                }
            }
        }
        return maxi; 
    }
};