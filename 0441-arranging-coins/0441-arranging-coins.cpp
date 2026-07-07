class Solution {
public:
    int arrangeCoins(int n) {
        int answer=0;
        for(int i = 1;i<=INT_MAX;i++){
            n = n-i;
            if(n<0){
                return answer;
            }
            else if(n==0){
                answer++;
                return answer;
            }
            else{
                answer++;
            }
        }
        return {};
    }
};