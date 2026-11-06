class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int right = 0;
        vector<int> hash(3,-1);
        while(right<s.size()){
            hash[s[right]-'a']=right;
            count+=min(min(hash[0],hash[1]),hash[2]);
            count++;
            right++;
        }
        return count;
    }
};