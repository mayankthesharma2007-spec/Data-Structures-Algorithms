class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector <int> vs;
        for(int i = 0; i < s.size(); i++){
            vs.emplace_back(s[i]);
        }
        sort(vs.begin(),vs.end()); 
        vector <int> vt;
        for(int i = 0; i < t.size(); i++){
            vt.emplace_back(t[i]);
        }
        sort(vt.begin(),vt.end());
        for(int i = 0; i < vs.size(); i++){
            if(vs[i]!=vt[i]){
                return false;
            }
        }
        return true;
    }
};