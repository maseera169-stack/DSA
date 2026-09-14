class Solution {
public:
long long solve(string s,int ind,long long num){
    if(ind==s.size()|| s[ind]<'0' || s[ind]>'9'){
        return num;
    }
    num=num*10+(s[ind]-'0');
     if(num > INT_MAX)
            return num;
    return solve(s,ind+1,num);


}
    int myAtoi(string s) {
int i=0;
int sign=1;
long long no=0;

int n=s.size();


        while( i<n && s[i]==' '){
i++;
        }
        if(i<n && s[i]=='-'){
sign=-1;
i++;}
 else if(i<n && s[i]=='+'){
        i++;
        
        }

//         while(i<n && s[i]>='0' && s[i]<='9'){
// num=num*10+(s[i]-'0');

        
        
        
//         if(sign==1 && num > INT_MAX)
//             return INT_MAX;
//          if(sign==-1 && -num < INT_MIN)
//             return INT_MIN;

//  i++;  }
long long num=solve(s,i,no);
         if(sign==1 && num > INT_MAX)
            return INT_MAX;
         if(sign==-1 && -num < INT_MIN)
            return INT_MIN;

    return sign*num;}
};