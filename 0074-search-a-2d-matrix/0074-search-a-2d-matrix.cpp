class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lowc = 0;
        int highc = matrix.size()-1;
        int n = matrix[0].size()-1;
        while(lowc<=highc){
            int midc=(lowc+highc)/2;
            if(target>=matrix[midc][0]&&target<=matrix[midc][n]){
                int lowr=0;
                int highr=n;
                while(lowr<=highr){
                    int midr=(lowr+highr)/2;
                    if(matrix[midc][midr]==target){
                        return true;
                    }
                    else if(matrix[midc][midr]>target){
                        highr=midr-1;
                    }
                    else{
                       lowr=midr+1;
                    }
                }
                return false;
            }
            else if(target<matrix[midc][n]){
                highc=midc-1;
            }
            else{
                lowc=midc+1;
            }
        }
        return false;    
    }
};