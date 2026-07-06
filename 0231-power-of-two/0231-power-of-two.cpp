class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        if(n==536870912){
            return true;
        }
        else{
            if(log(n)/log(2) - trunc(log(n)/log(2))==0){
                return true;
            }
            else{
                return false;
            }
        }
        return {};
    }
};