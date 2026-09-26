class Solution {
public:
    void reverSe(vector<char> &s , int i, int j){
        if(i>=j){
            return;
        }
        swap(s[i],s[j]);
        reverSe(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
        return reverSe(s,0,s.size()-1);
    }
};