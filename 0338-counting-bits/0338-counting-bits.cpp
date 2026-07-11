class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> answer;
        for(int i = 0; i<=n;i++){
            if(i==0){
                answer.emplace_back(0);
            }
            else if(i==1){
                answer.emplace_back(1);
            }
            else{
                long long count = 0;
                int temp = i;
                while(temp>0){
                    if(temp==1){
                        count++;
                        break;
                    }
                    if(temp>1){
                        if(temp%2==1){
                            count++;
                        }
                        temp=(temp-(temp%2))/2;
                    }
                }
                answer.emplace_back(count);
            }
        }
        return answer; 
    }
};