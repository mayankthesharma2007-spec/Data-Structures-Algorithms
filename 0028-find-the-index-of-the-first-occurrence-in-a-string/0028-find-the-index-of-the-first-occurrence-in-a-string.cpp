class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size()){
            return -1;
        }
        else{
            int l1 = 0;
            int l2 = 0;
            int l3 = 0;
            while(l2<haystack.size() && l3<needle.size()){
                if(haystack[l2]==needle[l3]){
                    l2++;
                    l3++;
                }
                else{
                    l3=0;
                    l2=l1+1;
                    l1=l2;
                }
            }
            if(l3==needle.size()){
                return l1;
            }
        }
        return -1;
    }
};