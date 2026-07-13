class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp;
        for (int i = 0; i < arr.size(); i++) {
            temp.push_back(arr[i]);
        }
        sort(temp.begin(), temp.end());
        unordered_map <int, int> mpp;
        int rank=1;
        for(int i = 0;i<temp.size();i++){
            if(mpp.find(temp[i])==mpp.end()){
                mpp[temp[i]]=rank;
                rank++;
            }
        }

        vector<int> answer;
        for(int i = 0;i<arr.size();i++){
            answer.push_back(mpp[arr[i]]);
        }
        return answer;
    }
};