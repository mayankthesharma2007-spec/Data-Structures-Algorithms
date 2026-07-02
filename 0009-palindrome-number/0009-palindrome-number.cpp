class Solution {
public:
    bool isPalindrome(int x){
        long long digi = abs((long long)x);
        long long reversenum = 0;

        while(digi > 0){
            int lastdigi = digi % 10;
            reversenum = (reversenum * 10) + lastdigi;
            digi = digi / 10;
        }
        if(x==reversenum){
            return true ;
        }
        else{
            return false;
        }
    }
};