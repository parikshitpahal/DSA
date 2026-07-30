class Solution {
public:
    bool chc(vector<int>& sides){
        int x=sides[0];
        int y=sides[1];
        int z=sides[2];
        if(z>=x+y)return true;
        if(x>=z+y)return true;
        if(y>=z+x)return true;
        return false;

    }
    vector<double> internalAngles(vector<int>& sides) {
        vector<double>v;
        if(chc(sides))return v;
        int x=sides[0];
        int y=sides[1];
        int z=sides[2];

        const double PI = std::acos(-1.0); 

// 1. Correct the math formulas with parentheses
double ff = (x*x + y*y - z*z) / (2.0 * x * y);
double ss = (z*z + y*y - x*x) / (2.0 * z * y);
double tr = (x*x + z*z - y*y) / (2.0 * x * z);

// 2. Clamp values to avoid NaN errors on edge cases
ff = std::clamp(ff, -1.0, 1.0);
ss = std::clamp(ss, -1.0, 1.0);
tr = std::clamp(tr, -1.0, 1.0);

// 3. Convert radians to degrees: angle * (180.0 / PI)
v.push_back(std::acos(ff) * (180.0 / PI));
v.push_back(std::acos(ss) * (180.0 / PI));
v.push_back(std::acos(tr) * (180.0 / PI));
        sort(v.begin(),v.end());
        return v;
    }
};