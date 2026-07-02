class Solution {
public:
    int reverse(int x) {
        long long digi = abs((long long)x);
        long long reversenum = 0;
        while(digi > 0){
            int lastdigi = digi%10;
            reversenum = (reversenum*10) + lastdigi;
            digi=digi/10;
        }
        if(reversenum > INT_MAX || reversenum < INT_MIN){
            return 0;
        }
        if(x<0){
            reversenum = - reversenum;
        }
        return reversenum;
        return {};
    }
};