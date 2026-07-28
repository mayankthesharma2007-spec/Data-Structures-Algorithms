class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int> mpp;
        for(int i = 0;i<weights.size();i++){
            mpp[char(97+i)]=weights[i];
        }
        string answer;
        for(int i = 0;i<words.size();i++){
            int sum=0;
            for(int j = 0;j<words[i].size();j++){
                sum+=mpp[words[i][j]];
            }
            sum = sum%26;
            answer=answer+char(122-sum);
        }
        return answer;
    }
};