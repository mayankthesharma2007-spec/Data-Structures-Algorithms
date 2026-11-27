class Solution {
public:
    int romanToInt(string s) {
        int roman[256]={0};
        roman['I']=1;
        roman['V']=5;
        roman['X']=10;
        roman['L']=50;
        roman['C']=100;
        roman['D']=500;
        roman['M']=1000;
        int i = 0;
        int sum = 0;
        
        while(i < s.size()){
            if(i==s.size()-1){
                sum = sum + roman[s[i]];
                i++;
            }
            else if(roman[s[i]] >= roman[s[i+1]]){
                sum = sum + roman[s[i]];
                i++;
            }

            else if(roman[s[i]] < roman[s[i+1]]){
                sum = sum + roman[s[i+1]] - roman[s[i]];
                i = i + 2;
            }
        }
        return sum; 
    } 
};    