class Solution {
public: 

    struct Element{
        int pos;
        int freq;
        char elem;

    };
    
    string sortVowels(string s) {
        
        unordered_map<char,int> mp;
        unordered_map<char,int>mp2;
        int index=0;
        for(char ch:s){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                mp[ch]++;
                if(mp2.find(ch)==mp2.end()){
                    mp2[ch]=index;
                }

            }
            index++;

        }
        vector<Element> vc;

        for(auto &[key,value]:mp){
            vc.push_back({mp2[key],value,key});
        }
        

        sort(vc.begin(),vc.end(),[](auto &elem1,auto &elem2){
            if(elem1.freq!=elem2.freq)return elem1.freq>elem2.freq;
            return elem1.pos<elem2.pos;
        });

        // int i=0;
        // pair<char,int>pp;
        // int mx= INT_MIN;
        // for(auto &[key,value]:mp){
        //     if(value>mx){
        //         mx=value;
        //         pp={key,value};

        //     }
        // }
    int i=0;
    int j=0;
        while(i<s.size()){
            // char ch=s[i];
            if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
                i++;
                continue;
            }
            else if(i<s.size()&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')&&vc[j].freq!=0){
                s[i]=vc[j].elem;
                vc[j].freq--;
               
            }
           if(vc[j].freq==0){
            j++;
           }
           i++;
                                                                                     
            
        }
        

        return s;


    }
};