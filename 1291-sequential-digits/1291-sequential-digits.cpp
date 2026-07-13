class Solution {
public:
    
    vector<int> sequentialDigits(int low, int high) {
        int pre=low;
        int nw=0;
        string lw=to_string(low);
        string hg=to_string(high);
        int c=1;
        vector<int>res;
        while(pre){
            nw=nw*10+c++;
            pre=pre/10;
        }
        string nww=to_string(nw);
        int i=0;
        while(stoi(nww)<stoi(lw)){
            if(nww[nww.size()-1]=='9'){nw=nw*10+c++;nww=to_string(nw);continue;}
            while(i<nww.size()){
                nww[i]=(nww[i]-'0'+1)+'0';
                i++;
            }
            i=0;
        }
        cout<<nww;
        if(stoi(nww)<=stoi(hg))res.push_back(stoi(nww));
        i=0;
        while(stoi(nww)<=stoi(hg)){
            if(nww[nww.size()-1]=='9'){nw=nw*10+c++;nww=to_string(nw);if(stoi(nww)<=stoi(hg))res.push_back(stoi(nww));continue;}
            
            while(i<nww.size()){
                nww[i]=(nww[i]-'0'+1)+'0';
                i++;
            }
            i=0;
            if(stoi(nww)<=stoi(hg))res.push_back(stoi(nww));
        }
        return res;
    }
};