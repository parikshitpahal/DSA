class Solution {
public:
    string multiply(string num1, string num2) {
        
        vector<vector<int>>vis(num1.size(),vector<int>(num1.size()+num2.size(),0));
        int mn=0;
        for(int i=num1.size()-1;i>=0;i--){
            int pt=num1.size()+num2.size()-1-mn;
            int car=0;
            for(int j=num2.size()-1;j>=0;j--){
                int ans=((num1[i]-'0') * (num2[j]-'0') +car)%10;
                car=((num1[i]-'0') * (num2[j]-'0') +car)/10;
                vis[num1.size()-1-i][pt--]=ans;
            }
            if(car!=0)vis[num1.size()-1-i][pt--]=car;
            mn++;
        }
        string ans="";
        for(int i=0;i<vis.size();i++){
            for(int j=0;j<vis[0].size();j++){
                cout<<vis[i][j]<<"";
            }
            cout<<endl;
        }
        int cr=0;
        for(int i=vis[0].size()-1;i>=0;i--){
            int sum=0;
            for(int j=0;j<vis.size();j++){
                sum+=vis[j][i];
            }
            sum+=cr;
            if(i==0 && sum==0)continue;
            cr=sum/10;
            sum=sum%10;
            ans=to_string(sum)+ans;
        }
        int fg=0;
        for(auto t:ans){
            if(t!='0')fg=1;;
        }
        if(fg==0){
            return "0";
        }
        return ans;
    }
}; 