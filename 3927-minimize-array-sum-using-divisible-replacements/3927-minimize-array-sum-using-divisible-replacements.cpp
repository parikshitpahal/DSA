class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums[0] == 1)
            return nums.size();

        long long sum = 0;
        int hash[1000000] = {0};

        int pre = -1;
        int psu = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (pre == nums[i]) {
                sum += psu;
                continue;
            }

            pre = nums[i];

            if (i == 0 && nums[i] > 1000) {
                psu = nums[i];
                sum += nums[i];
                hash[nums[i]] = 1;
                continue;
            }

            int flg = 0;
            int mn = nums[i];

            for (int j = 2; j * j <= nums[i]; j++) {

                if (nums[i] % j == 0) {

                    if (hash[j]) {
                        mn = min(mn, j);
                        flg = 1;
                    }

                    if (hash[nums[i] / j]) {
                        mn = min(mn, nums[i] / j);
                        flg = 1;
                    }
                }
            }

            if (flg) {
                psu = mn;
                sum += mn;
            }
            else {
                psu = nums[i];
                sum += nums[i];
            }

            hash[nums[i]] = 1;
        }

        return sum;
    }
};