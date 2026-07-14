class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>arr2=arr;
        sort(arr2.begin(),arr2.end());
        set<int>arr1;
        for(int i=0;i<arr.size();i++){
            arr1.insert(arr2[i]);
        }
        map<int,int>mp;
        vector<int>ar;
        for(auto it:arr1){
            ar.push_back(it);
        }
        for(int i=0;i<arr1.size();i++){
            if(mp.find(ar[i])==mp.end())mp[ar[i]]=i+1;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};