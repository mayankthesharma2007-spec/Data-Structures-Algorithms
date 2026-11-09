class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int i = 0;
        vector<vector<string>> answer;
        while(i<s1.size()){
            vector<string> curr;
            int l = -1;
            int r = -1;
            if(s1[i]!=s2[i]){
                while(i<s1.size() && s1[i]!=s2[i]){
                    if(l==-1){
                        l=i;
                    }
                    else{
                        r=i;
                    }
                    i++;
                }
                if(l!=-1 && r!=-1){  
                    curr.push_back(s1.substr(l,r-l+1));
                    curr.push_back(s2.substr(l,r-l+1));
                }
                else if(l!=-1){
                    curr.push_back({s1[l]});
                    curr.push_back({s2[l]});
                }
                answer.push_back(curr);
            }
            else{
                i++;
            }
        }
        return answer;
    }
};