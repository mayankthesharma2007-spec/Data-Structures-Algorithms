class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long answer = 0;
        if(need1 > need2){
            answer+=(1LL*need2 * min(costBoth, cost1+cost2));
            long long rem1 = need1-need2;
            answer+=(1LL * rem1 * min(costBoth, cost1));
        }
        else{
            answer+=(1LL * need1 * min(costBoth, cost1+cost2));
            if(need1==need2){
                return answer;
            }
            long long rem2 = need2-need1;
            answer+=(1LL * rem2 * min(costBoth , cost2));
        }
        return answer;
    }
};