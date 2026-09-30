class Solution {
public:
    vector <int> Merge_Array(vector <int> &array1, vector <int> &array2){
        int low1 = 0;
        int low2 = 0;
        int high1 = array1.size()-1;
        int high2 = array2.size()-1;
        vector <int> vs;
        while(low1<=high1 && low2<=high2){
            if(array1[low1]<=array2[low2]){
                vs.emplace_back(array1[low1]);
                low1++;
            }
            else if(array1[low1]>=array2[low2]){
                vs.emplace_back(array2[low2]);
                low2++;
            }
        }
        while(low1<=high1){
            vs.emplace_back(array1[low1]);
            low1++;
        }
        while(low2<=high2){
            vs.emplace_back(array2[low2]);
            low2++;
        }
        return vs;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { 
        vector <int> vs = Merge_Array(nums1,nums2);
        if(vs.size()%2!=0){
            int element = (vs.size()+1)/2;
            return vs[element-1];
        } 
        else if (vs.size()%2==0){
            int solu1 = (vs.size())/2;
            int solu2 = (vs.size())/2 + 1;
            return (vs[solu1-1] + vs[solu2-1])/2.0;
        }
        return {};  
    }
};