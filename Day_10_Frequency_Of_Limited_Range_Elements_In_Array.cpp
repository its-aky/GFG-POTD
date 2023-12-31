//https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        //LAude ka approach
        // int hash[100000+10];
        // memset(hash,0,sizeof(hash));
        
        // for(int i=0;i<N;i++){
        //     hash[arr[i]-1]++;
        // }
        
        // for(int i=0;i<N;i++){
        //     arr[i]=hash[i];
        // }
        
        //Good solution that follow up the constraints
        
        int rem=1+max(N,P);
        
        for(int i=0;i<N;i++){
            if((arr[i]%rem) > N)continue;
            arr[(arr[i]%rem)-1]+=rem;
        }
        
        for(int i=0;i<N;i++){
            arr[i]=arr[i]/rem;
        }
        
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends