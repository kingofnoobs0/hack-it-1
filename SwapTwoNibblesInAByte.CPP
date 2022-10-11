//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int swapNibbles(unsigned char x){
        int ans = 0;
        for(int i = 0; i < 4; i++){
            ans = ans + ((x >> i) & 1) * pow(2, i + 4);
        }
        for(int i = 4; i < 8; i++){
            ans = ans + ((x >> i) & 1) * pow(2, i - 4);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.swapNibbles(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
