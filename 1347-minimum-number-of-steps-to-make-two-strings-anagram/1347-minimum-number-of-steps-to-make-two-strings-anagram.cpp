class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mpp;
        for(int i = 0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int count=0;
        for(int i=0;i<t.size();i++){
            if(mpp.find(t[i])!=mpp.end() && mpp[t[i]]>0){
                mpp[t[i]]--;
            }
            else{
                count++;
            }
        }
        return count;
    }
};