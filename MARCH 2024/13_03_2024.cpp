class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        vector<int> ans;
        int n=mat.size();
        
        for(int itr=1;itr<=2*n-1;itr++){
            
            int lower,higher;
            
            if(itr<=n){
                
                lower=0;
                higher=itr-1;
                int i=lower,j=higher;
                while(i<=higher && j>=lower){
                        
                        int dx=i,dy=j;
                        
                        if(itr&1){//odd
                            swap(dx,dy);
                        }
                        
                        ans.push_back(mat[dx][dy]);
                        i++;
                        j--;
                
                }    
            }
            
            else{
                
                lower=itr%n;
                higher=n-1;
                int i=lower,j=higher;
                while(i<=higher && j>=lower){
                        
                        int dx=i,dy=j;
                        
                        if(itr&1){//odd
                            swap(dx,dy);
                        }
                        
                        ans.push_back(mat[dx][dy]);
                        i++;
                        j--;
                
                } 
                
                
            }
        }
        
        return ans;
    }
};
