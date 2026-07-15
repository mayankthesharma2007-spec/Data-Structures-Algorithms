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
        if(N1==0){
            return N2;
        }
        else if(N2==0){
            return N1;
        }
        while(N1!=0 && N2!=0){
            N1=max(N1,N2);
            N2=min(N1,N2);
            int temp=N1%N2;
            N1=N2;
            N2=temp;
            if(N1==1){
                return N1;
            }
            else if(N2==1){
                return N2;
            }
        }
        return N1;
    }
};