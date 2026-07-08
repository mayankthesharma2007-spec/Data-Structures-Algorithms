class Solution {
public:
    int maxDistinct(string s) {
        int count = 0;
        int i = 0;
        int j = 1;
        sort(s.begin(),s.end());
        if(s.size()==1){
            return 1;
        }
        while(j<s.size()){
            if(j==s.size()-1){
                if(s[i]==s[j]){
                    count++;
                }
                else{
                    count+=2;
                }
            }
            else if(s[i]!=s[j]){
                count++;
                i=j;
            }
            j++;
        }
        return count;
    }
};