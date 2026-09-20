class Solution {
public:
    int reverseDegree(string s) {
        int answer = 0;
        for(int i = 0;i<s.size();i++){
            answer+=(i+1)*(123-int(s[i]));
        }
        return answer;
    }
};