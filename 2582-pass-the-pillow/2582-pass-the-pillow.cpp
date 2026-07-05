class Solution {
public:
    int passThePillow(int n, int time) {
        if(time<n){
            return 1+time;
        }
        else{
            int pass= time % (n-1);
            int checker= time/ (n-1);
            if(checker%2==0){
                return 1+ pass;
            }
            else if(checker%2!=0){
                return n-pass;
            }
        }
        return {};
    }
};