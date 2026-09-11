class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int i = 1;
        while(i!=digits.size()+1){
            digits[digits.size()-i]+=carry;
            carry = 0;
            if(digits[digits.size()-i]<10){
                return digits;
            }
            else{
                digits[digits.size()-i]=0;
                i++;
                carry = 1;
            }
        }
        if(carry == 1){
            vector<int> answer;
            answer.push_back(1);
            for(int i = 0;i<digits.size();i++){
                answer.push_back(digits[i]);
            }
            return answer;
        }
        return {};
    }
};