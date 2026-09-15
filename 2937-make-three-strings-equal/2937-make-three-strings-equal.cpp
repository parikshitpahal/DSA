class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        if(s1[0]!=s2[0] || s1[0]!=s3[0])return -1;
        int ans=0;
        int i=0;
        int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
int mn = min(n1, min(n2, n3));
        while(i<mn && s1[i]==s2[i] && s1[i]==s3[i]){
            i++;
        }
        ans+=s1.size()-i;
        ans+=s2.size()-i;
        ans+=s3.size()-i;
        return  ans;;
    }
};