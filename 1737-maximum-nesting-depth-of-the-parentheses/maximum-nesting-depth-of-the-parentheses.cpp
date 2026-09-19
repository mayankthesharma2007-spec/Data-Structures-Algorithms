class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int answer = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='('){
                maxi++;
            }
            answer = max(maxi,answer);
            if(s[i]==')'){
                maxi--;
            }
        }
        return answer;
    }
};