//https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
  
    int minDist(int a[], int n, int x, int y) {
        int ans=INT_MAX;
        int last_x=-1,last_y=-1;
        
        
        for(int i=0;i<n;i++){
            if(a[i]==x){
                last_x=i;
                if(last_y!=-1)ans=min(ans,abs(last_x-last_y));
            }
            else if(a[i]==y){
                last_y=i;
                if(last_x!=-1)ans=min(ans,abs(last_x-last_y));
            }
            
        }
        
        if(last_x==-1 || last_y==-1)return -1;
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends