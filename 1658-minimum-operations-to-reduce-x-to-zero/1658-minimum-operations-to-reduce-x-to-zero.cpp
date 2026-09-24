class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(nums.size()==1)return x==nums[0]?1:-1;
        vector<int>pre;
        pre.push_back(0);
        for(int i=0;i<nums.size();i++)pre.push_back(nums[i]+pre.back());
        vector<int>post;
        post.push_back(0);
        for(int i=nums.size()-1;i>=0;i--)post.push_back(nums[i]+post.back());
        reverse(post.begin(),post.end());
        
        int i=0;
        for(auto it:pre){
            if(it>=x)break;
            i++;
        }
        if(pre[pre.size()-1]<x)return -1;
        int an=INT_MAX;
        int j=nums.size();
        while(j>0){
            if(pre[i]+post[j]<x){
                j--;
            }
            else if(pre[i]+post[j]>x && i>00){
                i--;
            }
            else if(x==pre[i]+post[j]){
                if(i+nums.size()-j<an)an=i+nums.size()-j;
                j--;
                
            }
            else {
                break;
            }
        }
        return an==INT_MAX?-1:an;
    }
};