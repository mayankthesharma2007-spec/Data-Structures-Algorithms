class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor){
            return 1;
        }
        bool sign = true;
        if(dividend >= 0 && divisor<0){
            sign = false;
        }
        if(dividend<0 && divisor>=0){
            sign = false;
        }
        long long N = abs((long long) dividend);
        long long d = abs((long long) divisor);
        long long answer = 0;
        while(N>=d){
            long long count = 0;
            while(N>=d<<(count+1)){
                count++;
            }
            answer+=(long long)1<<count;
            N-=d<<count;
        }
        if(answer>INT_MAX){
            return sign ? INT_MAX: INT_MIN;
        }
        return sign ? answer : -answer;
    }
};