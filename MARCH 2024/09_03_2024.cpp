class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        
        int m=s.size();
        string ans=s;
        
        int itr=m%2==0?m/2:(m/2)+1;
        
        for(int i=0;i<r;i++){
            
            string temp="";
            for(int j=0;j<itr;j++){
                
                if(ans[j]=='1'){
                    
                    temp+="10";
                }
                
                else{
                    temp+="01";
                }
            }
            
            ans=temp;
        }
        
        return ans[n];
    }
};
