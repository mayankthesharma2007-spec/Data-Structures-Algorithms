class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum = 0;
        int evensum = 0;
        for(int i = 1;i<=n*2;i++){
            if(i%2==0){
                evensum+=i;
            }
            else{
                oddsum+=i;
            }
        }
        int N1= max(evensum,oddsum);
        int N2= min(evensum,oddsum);
        while(N1!=0 && N2!=0){
            int temp=N1%N2;
            N1=N2;
            N2=temp;
        }
        return N1;
    }
};