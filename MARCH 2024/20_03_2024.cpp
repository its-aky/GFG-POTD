class Solution
{
public:
    
    int ans=INT_MIN;
    int greatest_height=INT_MIN;
    
    void helper(Node *root,int &height,int &sum){
        
        if(!root){
            return;
        }
        
        sum+=root->data;
        height+=1;
        
        if(!root->left && !root->right){
            if(height>greatest_height){
                ans=sum;
                greatest_height=max(greatest_height,height);
            }
            else if(height == greatest_height){
                ans=max(ans,sum);
            }
        }
        helper(root->left,height,sum);
        helper(root->right,height,sum);
        
        
        
        height--;
        sum-=root->data;
        
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int height=0,sum=0;
        helper(root,height,sum);
        
        return ans;
        
    }
};
