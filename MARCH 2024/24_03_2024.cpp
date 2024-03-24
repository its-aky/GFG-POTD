class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> ans;
        
        //transferring from st to ans stack
        while(!st.empty()){
            
            ans.push(st.top());
            st.pop();
        }
        ans.push(x);
        
        //transferring from ans to st stack
        while(!ans.empty()){
            
            st.push(ans.top());
            ans.pop();
        }
        
        
        return st;
    }
};
