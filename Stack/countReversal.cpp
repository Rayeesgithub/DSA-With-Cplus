int countRev (string s)
{
    // your code here
    // base-case->if odd size string then imposssible to count reversal
    if(s.size() & 1){
        return -1;
    }
    int ans=0;
    stack<char>st;

    for(char ch:s){
        if( ch=='{'){
            st.push(ch);
        }
        else {
            if(!st.empty() && st.top()=='{'){
           st.pop(); 
        }
        
        else
            st.push(ch);
      }  
    }
    // if stack is still non emptylets counts reversal
    while(!st.empty()){
        char a=st.top(); st.pop();
        char b=st.top(); st.pop();
       if(a==b){
           ans=ans+1;
       }
       else{
           ans=ans+2;
       }
    }
    return ans;
}