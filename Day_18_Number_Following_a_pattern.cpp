//https://www.geeksforgeeks.org/problems/number-following-a-pattern3126/1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        
        int n=S.size();
        vector<int> arr(n+1,0);
        
        int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(S[i]=='D'){
                cnt++;
                arr.push_back(cnt);
            }
            
            else{
                cnt=0;
                arr.push_back(-1);
            }
        }
        
        reverse(arr.begin(),arr.end());
        arr.push_back(0);
        
        vector<int> ans;
        int initial;
        if(arr[0]!=-1){
            initial=1+arr[0];
        }
        else{
            initial=1;
        }
        
        ans.push_back(initial);
        int maxi=initial;
        int curr=initial;
        
        for(int i=0;i<n;i++){
            
            if(arr[i]!=-1){
                curr--;
                ans.push_back(curr);
            }   
            else{
                if(arr[i+1]!=-1){
                    curr=maxi+arr[i+1]+1;
                    maxi=curr;
                }
                else{
                    curr=maxi+1;
                    maxi=curr;
                }
                ans.push_back(curr);
            }
        }
        
        //Converting a vector<int> into String 
        
        ostringstream oss;
        for (const int& num : ans) {
            oss << num;
        }
        string result = oss.str();
        
        return result;
        
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends