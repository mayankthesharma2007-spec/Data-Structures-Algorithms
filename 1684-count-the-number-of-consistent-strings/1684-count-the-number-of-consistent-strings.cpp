class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mpp;
        for(int i = 0;i<allowed.size();i++){
            mpp[allowed[i]]++;
        }
        int count = 0;
        for(int i = 0;i<words.size();i++){
            for(int j = 0;j<words[i].size();j++){
                if(mpp[words[i][j]]==0){
                    break;
                }
                else if(j==words[i].size()-1 && mpp[words[i][j]]!=0){
                    count++;
                }
            }
        }
        return count;
    }
};