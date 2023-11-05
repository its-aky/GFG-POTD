//https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        
        map<int,int> m;
        map<int,int> mr;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        
        vector<pair<int,int>> p;
        
        for(auto it:m){
            p.push_back({it.second,it.first});
        }
        
        sort(p.begin(),p.end());
        
        vector<int> v;
        
        for(int i=p.size()-1;i>=0;i--){
            if(k>0){
                v.push_back(p[i].second);
            } 
            else{
                break;
            }
            k--;
        }
        
        return v;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends