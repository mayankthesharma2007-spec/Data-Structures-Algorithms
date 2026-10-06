class Solution {
public:
    int scoreOfParentheses(string s) {
        int count = 0;
        int depth=0;
        for(int i = 0;i<s.size();i++){
            if(s[i]==')' && s[i-1]=='('){
                depth--;
                count+=pow(2,depth);
            }
            if(s[i]==')' && s[i-1]!='('){
                depth--;
            }
            else if(s[i]=='('){
                depth++;
            }
        }
        return count;
    }
};