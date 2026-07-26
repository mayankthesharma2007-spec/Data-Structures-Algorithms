class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& s, int k) {
        int l = 0;
        int r = 0;
        unordered_map<int,int> mpp;
        while(r<s.size() && l<s.size()){
            if(mpp[s[r]]==0){
                mpp[s[r]]++;
                r++;
            }
            else{
                if(r>0 && s[l]==s[r] && l!=r){
                    if(abs(l-r)<=k){
                        return true;
                    }
                    else{
                        mpp[s[r]]--;
                    }
                }
                l++;
            }
        }
        return false;  
    }
};