class Solution {
public:
    int maxProduct(int n) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        while(n>0){
            int last_digit=n%10;
            if(last_digit>=max1){
                int temp = max1;
                max2=temp;
                max1=last_digit;
            }
            else if(last_digit< max1 && last_digit>=max2){
                max2=last_digit;
            }
            n=n/10;
        }
        return max1*max2;
    }
};