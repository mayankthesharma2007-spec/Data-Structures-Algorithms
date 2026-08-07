class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size()-1;
        char answer = '2';
        while(low<=high){
            int mid = low + (high-low)/2;
            if(letters[mid]>target){
                high = mid-1;
                answer = letters[mid];
            }
            else{
                low = mid+1;
            }
        }
        if(answer=='2'){
            return letters[0];
        }
        return answer;
    }
};