class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> altitude;
        altitude.emplace_back(0);
        for(int i = 0; i <gain.size();i++){
            altitude.emplace_back(gain[i]+altitude[i]);
        }
        sort(altitude.rbegin(),altitude.rend());
        return altitude[0];    
    }
};