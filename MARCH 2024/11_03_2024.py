class Solution:
	def countPairs(self, mat1, mat2, n, x):
		hash=[0]*100001
		
		for i in range(n):
		    for j in range(n):
		        hash[mat2[i][j]]=1
		        
		ans=0
		for i in range(n):
		    for j in range(n):
		        if(x-mat1[i][j]>0 and hash[abs(x-mat1[i][j])]==1):
	                ans+=1;  
	            
        return ans
