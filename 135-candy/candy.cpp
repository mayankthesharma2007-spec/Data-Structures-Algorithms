class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> left(ratings.size(),1);
        for(int i = 1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                left[i]=left[i-1]+1;
            }
        }
        int candy = 1;
        int answer = left.back();
        for(int i = ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                candy++;
            }
            else{
                candy = 1;
            }
            left[i]=max(left[i],candy);
            answer+=left[i];
        }
        return answer;
    }
};