class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>arr2=arr;
        sort(arr2.begin(),arr2.end());
        map<int,int>mp;
        int c=1;
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr2[i])==mp.end())mp[arr2[i]]=c++;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};