class Solution {
public:
int priority(char ch){
    if(ch=='+' || ch=='-')return 1;
    if(ch=='*' || ch=='/')return 2;


return 0;}
    int calculate(string s) {
        stack<char> st;
        stack<int> st2;
        int op1;
        int op2;
        int result;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
if(isdigit(ch)){
    int num=0;
    while(i<s.length() && isdigit(s[i])){
        num=num*10+(s[i]-'0');
        i++;
    }
    st2.push(num);
    i--;
}
           else if(ch=='+' || ch=='-' || ch=='/' || ch=='*'){
                while(!st.empty() && priority(st.top())>= priority(ch)){
                  char op=st.top();
                  st.pop();
                  op2=st2.top();

                    st2.pop();
                     op1=st2.top();
                     st2.pop();

                if(op=='+')
                result=op1+op2;
                
                else if(op=='-')
                result=op1-op2;

                else if(op=='*')
                result=op1*op2;

                else if(op=='/')
                result=op1/op2;
st2.push(result);

                    }
                   
                
                st.push(ch);
            }
        
        }
        while(!st.empty()){
            char ch=st.top();
            st.pop();

            int op11;
            int op22;
             op2=st2.top();

                        st2.pop();
                        op1=st2.top();
                        st2.pop();
            
                if(ch=='+')
                result=op1+op2;
                
                else if(ch=='-')
                result=op1-op2;

                else if(ch=='*')
                result=op1*op2;

                else if(ch=='/')
                result=op1/op2;
st2.push(result);
              
        }
      

     return st2.top(); }
};