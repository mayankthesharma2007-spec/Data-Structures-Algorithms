class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for(int i = 1;i<=numRows;i++){
            if(i==1){
                answer.push_back({1});
            }
            else if(i==2){
                answer.push_back({1,1});
            }
            else{
                vector<int> temp;
                temp.push_back(1);
                int sum=0;
                for(int j = 0;j<i-1;j++){
                    sum+=answer[i-2][j];
                    if(j!=0){
                        temp.push_back(sum);
                        sum-=answer[i-2][j-1];
                    }
                }
                temp.push_back(1);
                answer.push_back(temp);
            }
        }
        return answer;
    }
};