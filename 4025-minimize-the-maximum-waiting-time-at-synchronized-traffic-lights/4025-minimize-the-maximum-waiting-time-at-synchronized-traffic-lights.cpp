class Solution {
public:
    int minPenalty(int per, vector<int>& lights, vector<int>& arr) {
        
        int mx=0;
        sort(lights.begin(),lights.end());
        int fl=lights[lights.size()-1];
        for(auto it: arr){
            int ch=it%per;
            if(ch>=fl && ch!=0){
                mx=max(mx,abs(per-ch));
                cout<<ch;
            }
        }
        return mx;
    }
};