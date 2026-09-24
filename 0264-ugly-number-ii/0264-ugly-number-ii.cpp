class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long> st = {1, 2, 3, 4, 5};
        st.insert(1);
        
        long long current = 1;
        for (int i = 0; i < n; i++) {

            current = *st.begin();
            st.erase(st.begin());
            
            st.insert(current * 2);
            st.insert(current * 3);
            st.insert(current * 5);
        }
        
        return (int)current;
    }
};