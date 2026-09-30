class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int> st;
        for(int i = 0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int count = 1;
        int largest = INT_MIN;
        for(auto it = st.begin();it!=st.end();it++){
            if(st.find(*it - 1)==st.end()){
                int test = *(it)+1;
                while(st.find(test)!=st.end()){
                    count++;
                    test++;
                }
                largest = max(largest,count);
                count=1;
            }
        }
        return largest;
    }
};