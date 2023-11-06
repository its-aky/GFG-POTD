//https://www.geeksforgeeks.org/problems/c-letters-collection4552/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        auto isValid=[&](int i,int j){
            
            if(i>=n || i<0 || j>=m || j<0)return false;
            
            return true;
            
        };
        
        int dx[]={-1,-1,-1,0,0,1,1,1};
        int dy[]={-1,0,1,-1,1,-1,0,1};
        
        
        //Just calculate the arrays for 2 hops also
        int dx2[] = {-2, -2, -2, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 2, 2, 2};
        int dy2[] = {-2, -1, 0, 1, 2, -2, 2, -2, 2, -2, 2, -2, -1, 0, 1, 2};
        
        
        vector<int> ans;
        for(int i=0;i<q;i++){
            int sum=0;
            int x=queries[i][1];
            int y=queries[i][2];
            
            if(queries[i][0]==1){
                for(int k=0;k<8;k++){
                    int new_x=x+dx[k];
                    int new_y=y+dy[k];
            
                    if(isValid(new_x,new_y)){
                        sum+=mat[new_x][new_y];
                    }
                } 
                ans.push_back(sum);
            }
            
            else{
                for(int k=0;k<16;k++){
                    int new_x=x+dx2[k];
                    int new_y=y+dy2[k];
            
                    if(isValid(new_x,new_y)){
                        sum+=mat[new_x][new_y];
                    }
                }
                
                ans.push_back(sum);
                
            }
        }
        
        return ans;
                   
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}
// } Driver Code Ends