
class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        
        unordered_map<int,int> hash;
        
        struct Node* root=head1;
        while(root){
            hash[root->data]=1;
            root=root->next;
        }
        
        int ans=0;
        while(head2){
            if(x-head2->data > 0 && hash[x-head2->data]==1){
                ans++;
            }
            head2=head2->next;
        }
        
        return ans;
        
    }
};
