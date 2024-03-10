class Solution{
public:
	string removeDuplicates(string str) {
	    string ans="";
	    vector<int> hash_cap(26,-1);
	    vector<int> hash_small(26,-1);
	    int n=str.size();
	    
	    for(int i=0;i<n;i++){
	        
	        if(str[i]>=65 && str[i]<=90){
	            if(hash_cap[str[i]-'A']==-1){
	               hash_cap[str[i]-'A']=1;
	               ans+=str[i];
	            }    
	        }
	        
	        else{
	            if(hash_small[str[i]-'a']==-1){
	               hash_small[str[i]-'a']=1;
	               ans+=str[i];
	            }    
	        }
	    }
	    
	    
	    return ans;
	}
};
