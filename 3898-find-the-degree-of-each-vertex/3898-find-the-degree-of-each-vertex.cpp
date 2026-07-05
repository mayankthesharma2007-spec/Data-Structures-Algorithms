class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> answer;
        for(int i = 0;i<matrix.size();i++){
            int sum=0;
            for(int j = 0;j<matrix[0].size();j++){
                sum+=matrix[i][j];
            }
            answer.emplace_back(sum);
        }
        return answer;
    }
};