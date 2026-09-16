class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>ans;
        int i=0;
        map<int,int>mp;
        while(pow(x,i)<bound){
            int j=0;

            while(pow(x,i)+pow(y,j)<=bound){

                mp[pow(x,i)+pow(y,j)]++;
                if(mp[pow(x,i)+pow(y,j)]==1)ans.push_back(pow(x,i)+pow(y,j));
                if(y==1)break;
                j++;
            }
            if(x==1)break;
            i++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};