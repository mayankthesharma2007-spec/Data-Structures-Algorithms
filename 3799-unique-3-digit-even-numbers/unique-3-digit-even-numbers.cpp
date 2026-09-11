class Solution {
public:
    int totalNumbers(vector<int>& digits) {
       int count = 0; 
       unordered_set<int> st;
       for(int i=0;i<digits.size();i++){
            if(digits[i]==0){
                continue;
            }
            else{
                for(int j = 0;j<digits.size();j++){
                    if(j==i){
                        continue;
                    }
                    else{
                        for(int k = 0; k<digits.size();k++){
                            if(k==i || k==j){
                                continue;
                            }
                            else if(digits[k]%2==0){
                                st.insert(digits[i]*100 + digits[j]*10 + digits[k]);
                            }
                        }
                    }
                }
            }
       } 
       return st.size();
    }
};