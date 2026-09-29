class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(int i = 0;i<s.size();i++){
            mpp[s[i]]++;
        }
        vector <string> buckets(s.size()+1,"");
        for(auto it = mpp.begin();it!=mpp.end();it++){
            buckets[it->second]+=it->first;
        }
        string answer = "";
        for(int i = s.size();i>=0;i--){
            for(char c: buckets[i]){
                answer.append(i,c);
            }
        }
        return answer;
    }
};