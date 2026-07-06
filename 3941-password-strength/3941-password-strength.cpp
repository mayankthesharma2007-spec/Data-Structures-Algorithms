class Solution {
public:
    int passwordStrength(string password){
        int count=0;
        unordered_map<char, int> mpp;
        for(int i = 0;i<password.size();i++){
            mpp[password[i]]++;
        }
        for(auto it:mpp){
            if(int(it.first)>=97 && int(it.first)<=122){
                count++;
            }
            else if(int(it.first)>=65 && int(it.first)<=90){
                count+=2;
            }
            else if(int(it.first)>=48 && int(it.first)<=57){
                count+=3;
            }
            else{
                count+=5;
            }
        }
        return count;
    }
};