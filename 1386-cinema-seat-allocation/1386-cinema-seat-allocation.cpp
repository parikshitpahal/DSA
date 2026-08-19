class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        int ans=0;
        if(rs.size()==1){
            ans=(rs[0][0]-1)*2;
            ans+=(n-rs[0][0])*2;
            if(rs[0][1]<2 || rs[0][1]>9)ans+=2;
            else ans+=1;
            return ans;
        }
        sort(rs.begin(),rs.end());
        int prow=1;
        int pcol=1;
        
        int fl=0;
        for(int i=0;i<rs.size();i++){
            if(prow!=rs[i][0]){
                    if(10-pcol==9)ans+=2;
                    else if(10-pcol>=5)ans+=1;
                    fl=0;   
                if(prow+1!=rs[i][0]){
                    ans+=(rs[i][0]-prow-1)*2;
                }
                prow=rs[i][0];
                pcol=1;
            }


            if(rs[i][1]-pcol>8){
                ans+=2;
                fl=1;
            }
            else if(rs[i][1]-pcol>=5){
                if(pcol==2 && rs[i][1]==7 || pcol==4 && rs[i][1]==9 ){
                    pcol=rs[i][1];
                    continue;
                }
                ans+=1;
                fl=1;
            }
            pcol=rs[i][1];
        }
        if(10-pcol==9)ans+=2;
        else if(10-pcol>=5)ans+=1;

        if(prow<n){
            ans+=(n-prow)*2;
        }

        return ans;
    }
};