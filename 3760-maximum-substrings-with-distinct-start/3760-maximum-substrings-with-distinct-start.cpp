class Solution {
public:
    int maxDistinct(string s) {
        vector<int> check(26,0);
        int ans =0;
        for(char ch : s){
            if(check[ch -'a'] == 0){
                ans++;
            }
            check[ch-'a']++;
        }
        return ans;
    }
};