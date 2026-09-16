class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string answer = "";
        int i = 0;
        while(i<s.size()){
            if(s[i]==')'){
                count--;
            }
            if(count!=0){
                answer+=s[i];
            }
            if(s[i]=='('){
                count++;
            }
            i++;
        }
        return answer;   
    }
};