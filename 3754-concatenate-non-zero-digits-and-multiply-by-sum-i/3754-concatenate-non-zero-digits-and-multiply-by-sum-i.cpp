class Solution {
public:
    long long sumAndMultiply(int n) {
        string q = to_string(n);
        long long sum=0;
        long long  colsum=0;
        for(int i = 0;i<q.size();i++){
            if((q[i]-'0')!=0){
                sum=sum*10;
                sum+=(q[i]-'0');
                colsum+=(q[i]-'0');
            }
        }
        return colsum*sum;
    }
};