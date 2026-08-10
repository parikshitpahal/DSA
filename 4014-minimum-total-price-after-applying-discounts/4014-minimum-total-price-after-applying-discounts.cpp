class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        double ans=0;
        int i=prices.size()-1;
        int j=discounts.size()-1;
        while(i>=0){
            double pr=prices[i];
            double dis;
            if(j>=0)dis=discounts[j]; 
            if(j>=0){
                pr=(pr*(100-dis))/100;
                j--;
            }
            ans+=pr;
            i--;
        }
        return ans;
    }
};