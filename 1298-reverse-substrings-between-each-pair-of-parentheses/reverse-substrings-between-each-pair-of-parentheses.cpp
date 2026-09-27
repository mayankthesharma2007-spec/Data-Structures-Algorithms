class Solution {
public:
    string reverseParentheses(string s) {
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push({'(',i});
            }
            if(s[i]==')'){
                int j = st.top().second;
                int k = i;
                while(j<=k){
                    swap(s[j],s[k]);
                    j++;
                    k--;
                }
                st.pop();
            }
        }
        string answer = "";
        for(int i = 0;i<s.size();i++){
            if(s[i]!='(' && s[i]!=')'){
                answer+=s[i];
            }
        }
        return answer;
    }
};