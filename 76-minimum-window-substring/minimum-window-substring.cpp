class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size()){
            return "";
        }
        int mini_len = INT_MAX;
        int indi = -1;
        int l = 0;
        int r = 0;
        int count = 0;
        vector<int> hash(256,0);
        for(int i = 0;i<t.size();i++){
            hash[t[i]]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0){
                count++;
            }
            hash[s[r]]--;
            if(count==t.size()){
                while(count==t.size()){
                    hash[s[l]]++;
                    if(hash[s[l]]==1){
                        count--;
                    }
                    if(mini_len>r-l+1){
                        mini_len = r-l+1;
                        indi = l;
                    }
                    l++;
                }
            }
            r++;
        }
        if(indi==-1){
            return "";
        }
        return s.substr(indi,mini_len);
    }
};