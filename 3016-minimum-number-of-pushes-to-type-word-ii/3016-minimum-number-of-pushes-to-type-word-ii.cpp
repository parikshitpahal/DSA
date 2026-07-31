class Solution {
public:
    int minimumPushes(string word) {
        
        unordered_map<char,int>mp;
        for(auto s:word){
            mp[s]++;
        }
        sort(word.begin(),word.end(),[&](auto &a,auto &b){
            return mp[a]>mp[b];
        });
        int hash[27]={0};
        int i=0;
        int sum=0;
        int pt=0;
        for(int i=0;i<word.size();i++){
            if(hash[word[i]-'a']!=0)sum+=hash[word[i]-'a'];
            else if(pt<8){
                pt++;
                sum+=1;
                hash[word[i]-'a']=1;
            }
            else if(pt<16){
                pt++;
                sum+=2;
                hash[word[i]-'a']=2;
                cout<<'w';
            }
            else if(pt<24){
                pt++;
                sum+=3;
                hash[word[i]-'a']=3;
            }
            else{
                pt++;
                sum+=4;
                hash[word[i]-'a']=4;
            } 
        }
        return sum;
    }
};