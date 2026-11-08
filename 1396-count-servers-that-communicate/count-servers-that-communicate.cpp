class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int count = 0;
        vector<int> row_count;
        vector<int> col_count;
        for(int i = 0;i<grid.size();i++){
            int curr = 0;
            for(int j = 0; j<grid[0].size();j++){
                if(grid[i][j]==1){
                    curr++;
                }
            }
            row_count.push_back(curr);
        }
        for(int i = 0;i<grid[0].size();i++){
            int curr = 0;
            for(int j = 0; j<grid.size();j++){
                if(grid[j][i]==1){
                    curr++;
                }
            }
            col_count.push_back(curr);
        }
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if((row_count[i]>1 || col_count[j]>1) && grid[i][j]!=0){
                    count++;
                }
            }
        }
        return count;
    }
};