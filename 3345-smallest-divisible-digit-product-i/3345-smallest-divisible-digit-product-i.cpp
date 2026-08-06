class Solution {
public:
    int num_finder(int n){
        int product = 1;
        while(n>0){
            product*=n%10;
            n=n/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(true){
            if(num_finder(n)%t==0){
                return n;
            }
            else{
                n++;
            }
        }
        return -1;
    }
};