class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto it :tokens){
            if(it!="+" && it!="-" && it!="/" && it!="*")
            st.push(stoi(it));

            else{
                
                int op2=st.top();
                  st.pop();
                int op1=st.top();
                  st.pop(); 
                  int result;
                if(it=="+")
                  result=op1+op2;
                
                else if(it=="-")
                result=op1-op2;

                else if(it=="*")
                result=op1*op2;

                else if(it=="/")
                result=op1/op2;

              st.push(result);  

            }

        }
    return st.top();}
};