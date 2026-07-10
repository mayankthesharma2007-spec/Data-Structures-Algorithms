class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0;i<s.size();i++){
            if(int(s[i])<97 && int(s[i])<=90 && int(s[i])>=65){
                char temp=s[i];
                s[i]=char(int(s[i])+32);
            }
        }
        return s;
    }
};