//https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        if(n==1 || n==2)return n;
        int ans=0;
        while(n!=2){
            ans++;
            if(n%2==0){
                n/=2;
            }
            else{
                n-=1;
            }
            
        }
        return ans+n;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends