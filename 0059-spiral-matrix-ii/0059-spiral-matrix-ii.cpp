class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> answer(n, vector<int>(n,0));
        int top = 0;
        int left = 0;
        int right=n-1;
        int bottom=n-1;
        int count=1;
        while(top<= bottom && right>=left){
            for(int i = left;i<=right;i++){
                answer[top][i]=count;
                count++;
            }
            top++;
            for(int i = top;i<=bottom;i++){
                answer[i][right]=count;
                count++;
            }
            right--;
            if(top<=bottom){
                for(int i = right;i>=left;i--){
                    answer[bottom][i]=count;
                    count++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i = bottom;i>=top;i--){
                    answer[i][left]=count;
                    count++;
                }
                left++;
            }
        }
        return answer;
    }
};