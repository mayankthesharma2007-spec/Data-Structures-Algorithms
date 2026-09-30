class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
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