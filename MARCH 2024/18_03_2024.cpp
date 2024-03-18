class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
        vector<int> ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            Node* temp=q.front();
            q.pop();
            
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            ans.push_back(temp->data);
        }
        
        return ans;
    }
};
