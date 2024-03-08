class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    unordered_map<char,int> mm;
	    for(auto x:s)mm[x]++;
	    int mn=INT_MAX,mx=INT_MIN,mxCount=0;
	    for(auto x:mm){
	        mn=min(mn,x.second);
	        mx=max(mx,x.second);
	    }
	    for(auto x:mm){
	        if(x.second==mx)mxCount++;
	    }
	    if(mn==mx or (mn==mx-1 and mxCount==1))return true;
	    
	    if(mxCount==mm.size()-1 && mn==1)return true;
	    return false;
	}
};
