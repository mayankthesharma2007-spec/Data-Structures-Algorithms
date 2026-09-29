class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        vector<pair<int,char>> vs;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto it = mpp.begin();it!=mpp.end();it++){
            vs.push_back({it->second,it->first});
        }
        sort(vs.begin(),vs.end(),greater<pair<int,char>>());
        string answer = "";
        for(int i = 0;i<vs.size();i++){
            while(vs[i].first!=0){
                answer+=vs[i].second;
                vs[i].first--;
            }
        }
        return answer;
    }
};