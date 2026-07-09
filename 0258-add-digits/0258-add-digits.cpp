class Solution {
public:
    int addDigits(int num) {
        int sum = INT_MAX;
        int colum=0;
        while(sum/10 !=0 ){
            while(num>0){
                colum= colum+ (num%10);
                num=num/10;
            }
            sum=colum;
            num = sum;
            colum=0;
        }
        if(num<10){
            return num;
        }
        else{
            return sum;
        }
        return {};
    }
};