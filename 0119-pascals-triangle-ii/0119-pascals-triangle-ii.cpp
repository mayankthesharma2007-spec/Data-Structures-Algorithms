class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        if(rowIndex==0){
            return {1};
        }
        else if(rowIndex==1){
            return {1,1};
        }
        else{
            temp.push_back(1);
            long long  answer=1;
            for(int i = 1;i<=rowIndex;i++){
                answer = answer * (rowIndex-i+1)/i;
                temp.push_back(answer);
            }
        }
        return temp;
    }
};