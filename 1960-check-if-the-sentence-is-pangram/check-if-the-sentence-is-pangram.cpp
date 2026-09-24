class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> check(26,0);
        int count = 0;
        for(int i=0;i<sentence.size();i++){
            if(check[sentence[i]-'a']==0){
                count++;
            }
            check[sentence[i]-'a']++;
        }
        if(count!=26){
            return false;
        }
        return true;
    }
};