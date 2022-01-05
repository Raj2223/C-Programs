#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int maximizeMoney(int N, int K)
    {
        int ans;

        if (N % 2 == 1)
        {
            ans = ((N / 2) + 1) * K; // ans calculated when N is odd
        }
        else
        {
            ans = (N / 2) * K; // // ans calculated when N is even
        }

        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;

        cin >> N >> K;

        Solution ob;
        cout << ob.maximizeMoney(N, K) << endl;
    }
    return 0;
} // } Driver Code Ends