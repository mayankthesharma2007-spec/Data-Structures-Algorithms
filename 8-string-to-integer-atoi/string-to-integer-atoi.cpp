class Solution {
public:
    int myAtoi(string s) {
        int c = INT_MIN;
        int l = INT_MIN;
        int r = 0;
        long long count = 0;
        while(r<s.size()){
            if(s[r]==' '){
                if(l==INT_MIN && c==INT_MIN){
                    r++;
                    continue;
                }
                else{
                    break;
                }
            }
            if(s[r]=='+' || s[r]=='-'){
                if(c==INT_MIN){
                    if(l==INT_MIN){
                        l=r;
                    }
                    if(r!=s.size()-1 && int(s[r+1])>=48 && int(s[r+1])<=57){
                        r++;
                        continue;
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }
            }
            if(int(s[r])>=48 && int(s[r])<=57){
                if(c==INT_MIN){
                    c=r;
                }
                if((long long)count*10>INT_MAX){
                    count = (long long) INT_MAX + 1;
                    break;
                }
                else if((long long)count*10==INT_MAX){
                    count = INT_MAX;
                }
                else{
                    count*=10;
                    count+=s[r]-'0';
                }
                r++;
            }
            else{
                break;
            }
        }
        if(l!=INT_MIN){
            if(s[l]=='-'){
                if(count>INT_MAX){
                    return INT_MIN;
                }
                else{
                    return -count;
                }
            }
        }
        if(count>=INT_MAX){
            return INT_MAX;
        }
        return count;
    }
};