class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int idx=-1;
        int dist=100000;
        int x=target[0];
        int y=target[1];
        for(int i=0;i<drones.size();i++){
            int dis=abs(drones[i][0]-x)+abs(drones[i][1]-y);
            if(dis<=drones[i][2]){
                if(dis<dist){
                    dist=dis;
                    idx=i;
                }
            }
        }
        return idx;
    }
};