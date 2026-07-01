class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> answer;
        for (int i = 1; i < height.size(); i++) {
            if (height[i - 1] > threshold) {
                answer.push_back(i);
            }
        }
        return answer;
    }
};