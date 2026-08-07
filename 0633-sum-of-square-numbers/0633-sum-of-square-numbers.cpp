class Solution {
public:
    bool judgeSquareSum(int c) {
        int low = 0;
        int high = sqrt(c);
        while(low<=high){
            long long  left = low;
            long long  right = high ;
            long long  mid = low + (high-low)/2;
            while(left<=mid && right>=mid){
                long long  sum = left*left + right*right;
                if(sum==c){
                    return true;
                }
                else if(sum>c){
                    right--;
                }
                else{
                    left++;
                }
            }
            if(left>=mid){
                low = mid+1;
            }
            else if(right<=mid){
                high = mid-1;
            }
        }
        return false;
    }
};