class Solution {
public:
    int row_calculator(vector<vector<int>> &mat, int mid){
        int index = -1;
        int maxi = INT_MIN;
        for(int i=0;i<mat.size();i++){
            if(mat[i][mid]>maxi){
                maxi=mat[i][mid];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int high = mat[0].size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int row = row_calculator(mat,mid);
            int left;
            int right;
            if(mid-1>=0){
                left=mat[row][mid-1];
            }
            else{
                left=-1;
            }
            if(mid+1<mat[0].size()){
                right=mat[row][mid+1];
            }
            else{
                right=-1;
            }

            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            else if(mat[row][mid]>left){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return {-1,-1};
    }
};