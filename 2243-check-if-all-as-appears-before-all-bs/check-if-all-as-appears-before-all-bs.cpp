class Solution {
public:
    bool checkString(string s) {
        int indi = -1;
        for(int i = 0;i<s.size();i++){
            if(indi==-1 && s[i]=='b'){
                indi = i;
            }
            if(s[i]=='a' && i>indi && indi!=-1){
                return false;
            }
        }
        return true;
    }
};