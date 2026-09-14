class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int>aa;
        vector<int>bb;
        int idx=0;
        for(int i=0;i<s.size();i++){
            idx=i;
            int c=0;
            while(c<a.size() && s[i]==a[c] && i<s.size()){
                i++;
                c++;
            }

            if(c==a.size() && c!=0){
                aa.push_back(idx);

            }
            
            i=idx;
            
        }


        for(int i=0;i<s.size();i++){
            idx=i;
            int c=0;
            while(c<b.size() && s[i]==b[c] && i<s.size()){
                i++;
                c++;
            }
            if(c==b.size() && c!=0){
                bb.push_back(idx);
                cout<<idx<<" ";
            }
            i=idx;   
        }
        // sort(aa.begin(),aa.end());
        // sort(bb.begin(),bb.end());
        vector<int>ams;
        for(int i=0;i<aa.size();i++){
            for(int j=0;j<bb.size();j++){
                if(abs(aa[i]-bb[j])<=k){
                   
                    ams.push_back(aa[i]);
                    break;
                }
            }
        }
        return ams;
    }
};