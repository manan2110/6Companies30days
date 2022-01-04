class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        // 1 + 4 + 9 + 16 +....+ N^2
        return N*(N+1)*(2*N + 1)/6;
    }
};