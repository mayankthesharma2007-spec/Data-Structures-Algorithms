class Solution {
public:
    int convertDay(const string &str){
        const vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int total_Days = stoi(str.substr(3,2));
        for(int i = 0;i<stoi(str.substr(0,2))-1;i++){
            total_Days+=days[i];
        }
        return total_Days;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int arrive_A = convertDay(arriveAlice);
        int leave_A = convertDay(leaveAlice);
        int arrive_B = convertDay(arriveBob);
        int leave_B = convertDay(leaveBob);
        return max(0,min(leave_A,leave_B)-max(arrive_A,arrive_B)+1);
    }
};