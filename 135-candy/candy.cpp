class Solution {
public:
    int candy(vector<int>& ratings) {
        int candy = ratings.size();
        int i = 1;
        while(i<ratings.size()){
            if(ratings[i]==ratings[i-1]){
                i++;
                continue;
            }
            int peak = 0;
            while(ratings[i]>ratings[i-1]){
                peak++;
                candy+=peak;
                i++;
                if(i==ratings.size()){
                    return candy;
                }
            }
            int dip = 0;
            while(i<ratings.size() && ratings[i]<ratings[i-1]){
                dip++;
                candy+=dip;
                i++;
            }
            candy-=min(peak,dip);
        }
        return candy;
    }
};