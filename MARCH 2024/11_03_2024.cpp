class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    vector<int> hash(1e5+1,0);
	    
	    for(int i=0;i<n;i++){
	        
	        for(int j=0;j<n;j++){
	            
	            hash[mat2[i][j]]=1;
	        
	        }   
	    }
	    
	    int ans=0;
	    for(int i=0;i<n;i++){
	        
	        for(int j=0;j<n;j++){
	            
	            if(x-mat1[i][j]>0 && hash[abs(x-mat1[i][j])]==1){
	                ans++;  
	            }
	        
	        }   
	    }
	    
	    return ans;
	    
	    
	    
	}
};
