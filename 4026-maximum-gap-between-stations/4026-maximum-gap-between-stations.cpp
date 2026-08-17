class Solution {
public:
    int maximumGap(string sk, string st) {
        if(sk.size()==1 || st.size()==1)return 0;
        vector<int>lft;
        vector<int>rgt;
        int j=0;
        for(int i=0;i<st.size();i++){
            if(j==sk.size())break;
            if(st[i]==sk[j]){
                lft.push_back(i);
                j++;
            }
        }
        j=sk.size()-1;
        for(int i=st.size()-1;i>=0;i--){
            if(j<0)break;
            if(st[i]==sk[j]){
                rgt.push_back(i);
                j--;
            }
        }
        
        int ans=0;
        
        reverse(rgt.begin(),rgt.end());

        for(int i=0;i<lft.size()-1;i++){
            ans=max(ans,abs(lft[i]-rgt[i+1]));
            // ans=max(ans,abs(rgt[i]-lft[i+1]));
            cout<<ans;
        }

        return ans;
    }
};