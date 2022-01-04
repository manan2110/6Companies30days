class Solution
{
public:
    int findPosition(int N, int M, int K)
    {
        // code here
        if (K + M - 1 > N)
        {
            int ans = (K + M - 1) % N;
            if (ans == 0)
                return N;
            else
                return ans;
        }
        return K + M - 1;
    }
};