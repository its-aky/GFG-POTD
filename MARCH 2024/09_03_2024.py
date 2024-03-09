class Solution:
    def nthCharacter(self, s, r, n):
        
        m=len(s)
        ans=s
        itr=int(0)
        if(m%2==0):
            itr=int(m/2)
        else:
            itr=int((m/2)+1)
            
        for i in range(0,r):
            
            temp=""
            for j in range(0,itr):
                
                if(ans[j]=="1"):
                    temp+="10"
                    
                else:
                    temp+="01"
            
            ans=temp
            
        return ans[n]
