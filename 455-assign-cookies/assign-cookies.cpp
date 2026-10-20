class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int l1 = 0;
        int l2 = 0;
        while(l1<g.size() && l2<s.size()){
            if(g[l1]<=s[l2]){
                l1++;
                l2++;
            }
            else{
                l2++;
            }
        }
        return l1;
    }
};