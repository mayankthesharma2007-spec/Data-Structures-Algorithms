class Solution {
public:
    string reverseWords(string s) {
        string answer = "";
        int i = s.size()-1;
        int j = i;
        while(j>=0){
            while(j>=0 && s[j]==' '){
                j--;
            }
            if(j<0){
                break;
            }
            i=j;
            while(j>=0 && s[j]!=' '){
                j--;
            }
            if(!answer.empty()){
                answer+=" ";
            }
            answer+=s.substr(j+1,i-j);
        }
        return answer;
    }
};