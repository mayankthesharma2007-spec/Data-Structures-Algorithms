class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int> mpp1;
        for(int i = 0;i<magazine.size();i++){
            mpp1[magazine[i]]++;
        }
        for(int i = 0;i<ransomNote.size();i++){
            if(mpp1[ransomNote[i]]==0){
                return false;
            }
            else{
                mpp1[ransomNote[i]]--;
            }
        }
        return true;
    }
};