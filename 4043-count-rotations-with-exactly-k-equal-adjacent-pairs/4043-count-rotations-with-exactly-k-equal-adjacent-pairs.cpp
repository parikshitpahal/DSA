class Solution {
public:
    int countRotations(string s, int k) {
        string t=s+s;
        int ans=0;
        for(int i=0;i<s.size();i++){
            int tmp=0;
            char pre=t[i];
            for(int j=i+1;j<i+s.size();j++){
                if(t[j]==pre)tmp++;
                pre=t[j];
            }
            if(tmp==k)ans++;
        }
        return ans;
    }
};