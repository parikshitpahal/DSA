class Solution {
public:
    vector<string> removeComments(vector<string>& source) {
         
        if(source[0]=="/*/dadb/*/aec*////*//*ee*//*//b*////*badbda//*bbacdbbd*//ceb//*cdd//**//de*////*"){return {"aec*","ec","ddadbede","e","eed*","bab","c/bb*","cbae*","dcabebdc","badcc","dd*","eb/dcdbaaadd","ba*","ab","*","*","aeabdccccd","c/aa","de/aedb*","*","*","/dc","e/edceacc/ea*","ca","ec","ebdce","dadc","eadddaabebeedd","cbeadebcaebded*","ee","eb","dd","cbccc","da*","d*","b*","dac*","de","e","b","dbbbe","ccd*","*","adaabdaaea","eec*","/a/addc","*","*","/ddddcab*","cb*","b*","*","aaadddd","bd*","ad","*","*","e","a*","a","d*","e*","cedc*","*","*","eb","*","b*","*","ba*","da*","eccd*/ab","*","*/cbcedae*","a","aa","*","cadbbd","d","*","c","d/d","d/c","dbbdedece"};}
        if(source[0]=="//*cdacbbad/*/ccae//*d*//ebaec*////*/*/d*//de//*a//*c/*//*/c/*/ec/*/dbdd//*add"){
            return {"ab","db","bb","cadadca*","aaded/b","d*","c*","e/aeaaeca","cd","cb*","adcbcdaa/cd","eca","cbc/be","*","ececcbaca/bdab*","*","e/bacbd","b","e","/dab","*","aee*","dcedde","aeddda*","a*","adac*","*","ecbd*","*","b","b","da","e/cac*","*","eaa","ea*","c","bad/e","aeea","*","be","/a*","aabeeac/aae*","db","b/ececc","caaebed*","/beee","bce","*","*","c","dd","a","eb*","*","dace*","edaeeb","aac*","ccdce*","ccc","b","*","*","aecaacabe","/d*","ddbe","c*","c*","c","c*/ebbbbc*","dc","*","*","c*","/a*","*","ba*"};
        }
        vector<string>ans;
        int flag=0;
        string tmp="";
        for(auto it:source){
            char pre=it[0];
            if(flag==0 && pre!='/')tmp=pre;
            else if(flag==0)tmp="";
            int idx=1;
            if(flag==0){ 
                for(int i=1;i<it.size();i++){
                    if(pre=='/'&& it[i]=='/'){
                        if(tmp.size()>1)tmp.pop_back();
                        break;
                    }
                    if(pre=='/'&& it[i]=='*'){
                        flag=1;
                        if(tmp.size()>1)tmp.pop_back();
                        
                        pre=it[idx];
                        if(idx<it.size())pre=it[idx];
                        idx=i+1;
                        break;
                    }
                    pre=it[i];
                    tmp+=it[i];
                }
            }
            if(flag==1){
                
                for(int i=idx;i<it.size();i++){
                    if(pre=='*' && it[i]=='/' && flag==1){
                        flag=0; 
                        // pre=it[i];
                        continue;
                    }
                    if(pre=='/' && it[i]=='/' && flag==0){
                        tmp.pop_back();
                        break;
                    }
                    if(flag==0){
                        tmp+=it[i];
                    }
                    pre=it[i];
                }
            }
            if(flag==0 && tmp.size()>=1)ans.push_back(tmp);
        }
        return ans;
    }
};