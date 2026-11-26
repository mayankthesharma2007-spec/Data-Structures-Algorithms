class Solution {
public:
    bool canAliceWin(int n) {
        int i = 0;
        int count = 10;
        while(n>=count){
            i++;
            n-=count;
            count--;
        }
        if(i%2==0){
           return false; 
        }
        return true;
    }
};