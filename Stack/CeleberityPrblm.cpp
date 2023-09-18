class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        //stack create
        stack<int>st;
        //step-1
        //push all data member
        for(int i=0; i<n; i++){
            st.push(i);
        }
        // to eleminate for get might be celeberity
        //step-2
        while(st.size()!=1){
            int a=st.top(); st.pop();
            int b=st.top(); st.pop();
            // if a knows b
            if(M[a][b]){
                // a is not celeberity might b
                st.push(b);
            }
            else{// b knows a
            // b is not celeberity might be a
                st.push(a);
            }
        }
        // steo-3 check the persont that is actually celeberity
        int mightBeCeleberity=st.top(); st.pop();
       // celeberity should not be know anyone
        for(int i=0; i<n; i++){
            if(M[mightBeCeleberity][ i]!=0){
                return -1;
            }
        }
        // everyone know celeberity
         for(int i=0; i<n; i++){
            if(M[i][ mightBeCeleberity]==0 &&  i!=mightBeCeleberity){
                return -1;
            }
         }
         return  mightBeCeleberity;
        }
};