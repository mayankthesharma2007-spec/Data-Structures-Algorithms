class Solution {
public:
    string stringHash(string s, int k) {
        string answer;
        int count = 0;
        int sum = 0;
        for(int i=0;i<s.size();i++){
            count++;
            sum+=(int(s[i])-97);
            if(count==k){
                sum=sum%26;
                answer.push_back(char(97+sum));
                count=0;
                sum =0;
            }
        }
        return answer;
    }
};