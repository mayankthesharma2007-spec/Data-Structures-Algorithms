class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp = s;
        int temp1 = s[0];
        for(int i = 0;i<s.size()-1;i++){
            s[i]=s[i+1];
        } 
        s[s.size()-1]=temp1;
        if(s==goal){
            return true;
        }
        while(temp!=s){
            int temp1 = s[0];
            for(int i = 0;i<s.size()-1;i++){
                s[i]=s[i+1];
            } 
            s[s.size()-1]=temp1;
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};