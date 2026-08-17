class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum=0;
        int pre=0;
        for(auto it:requests){
            sum+=abs(it-pre);
            pre=it;
        }
        return sum;
    }
};