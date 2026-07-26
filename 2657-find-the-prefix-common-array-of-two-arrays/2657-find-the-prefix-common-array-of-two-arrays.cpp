class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mpp;
        vector<int> ans;
        for(int i = 0;i<A.size();i++){
            mpp[A[i]]++;
            int count = 0;
            for(int j = 0;j<=i;j++){
                if(mpp.find(B[j])!=mpp.end()){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};