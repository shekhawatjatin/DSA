class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int currentMax = 0; 
        vector<int> prefixGcd(n);

   
        for (int i = 0; i < n; i++) {
            if (nums[i] > currentMax) {
                currentMax = nums[i];
            }
            prefixGcd[i] = gcd(nums[i], currentMax);
        }


        sort(prefixGcd.begin(), prefixGcd.end());

        int i = 0;
        int j = prefixGcd.size() - 1;
        long long sum = 0;

        while (i < j) {
            sum += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        
        return sum;
    }
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};