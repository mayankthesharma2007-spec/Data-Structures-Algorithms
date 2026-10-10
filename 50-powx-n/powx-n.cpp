class Solution {
public:
    double myPow(double x, int n) {
        double answer = 1.0;
        long long m = abs((long long)n);
        while(m>0){
            if(m%2==0){
                x*=x;
                m/=2;
            }
            else{
                answer*=x;
                m-=1;
            }
        }
        if(n<0){
            return  1.0 / (double) answer;
        }
        return answer;
    }
};