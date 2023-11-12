//https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    
    //O(1) space complexity solution
    
    bool checker(string &str1, string &str2,bool flag){
        int n=str1.size();
        if(flag){//anti clockwise
            int s1=2;
            int i=0;
            for(i=0;i<n-2;i++){
                if(str1[s1]!=str2[i]){
                    return false;
                }
                s1++;
            }
            
            if(str1[0]==str2[i] && str1[1]==str2[i+1]){
                return true;
            }
            
            return false;
            
            
        }
        
        //clockwise
        else{
            int i=0;
            int s2=2;
            for(i=0;i<n-2;i++){
                if(str1[i]!=str2[s2]){
                    return false;
                }
                s2++;
            }
            
            if(str1[i]==str2[0] && str1[i+1]==str2[1]){
                return true;
            }
            
            return false;
            
            
            
            
        }
    }
    
    bool isRotated(string str1, string str2)
    {
        int n=str1.size();
        int m=str2.size();
        
        if(n!=m)return false;
        
        if(n<=2){
            return str1==str2;
        }
        
        int start=0;
        int end=0;
        
        //for anti-clockwise rotation
        bool ans1=checker(str1,str2,true);
        
        //for clockwise rotation
        bool ans2=checker(str1,str2,false);
        
        return ans1 || ans2;
        
        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends