class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        int count = 0;
        vector<int> vs;
        for(int i = 0;i<s.size();i++){
            if(s[i]==')'){
                count--;
            }
            vs.push_back(count%2);
            if(s[i]=='('){
                count++;
            }
        }
        return  vs;
    }
};