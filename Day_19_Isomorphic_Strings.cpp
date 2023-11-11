//https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1

//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        map<char,char> m;
        int n=str1.size();
        int m_s=str2.size();
        
        if(n!=m_s)return false;
        
        bool ans1=true,ans2=true;
        for(int i=0;i<n;i++){
            if(m.find(str1[i])!=m.end()){//found a previous map
                if(m[str1[i]]==str2[i]){
                    continue;
                    
                }
                else{
                    ans1=false;
                    break;
                } 
            }
            else{
                m[str1[i]]=str2[i];
            }
        }
        
        map<char,char> m1;
        
        for(int i=0;i<n;i++){
            if(m1.find(str2[i])!=m1.end()){//found a previous map
                if(m1[str2[i]]==str1[i]){
                    continue;
                    
                }
                else{
                    ans2=false;
                    break;
                } 
            }
            else{
                m1[str2[i]]=str1[i];
            }
        }
        
        return ans1 && ans2;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends