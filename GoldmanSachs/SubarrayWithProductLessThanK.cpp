// Sliding window
class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {
        long long int count = 0, i = 0, j = 0;
        long long int curr = 1;
        while (j < n)
        {
            curr *= a[j];
            while (i < n && curr >= k)
                curr /= a[i++];
            if (curr < k)
                count += (j - i) + 1;
            j++;
        }
        return count;
    }
};