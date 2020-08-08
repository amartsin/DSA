#include<bits/stdc++.h>
using namespace std;

int main() {
    // no. of test cases 
	 int t;
	 cin>> t;
	 while(t--){
	     // accepting a string of brackets for each test cases
	     string s;
	     cin>>s;
	     //declaring a stack which will help us to keep track of the opening and closing brackets 
	     stack<char> k;
	     
	     // we will traverse the string and if we find an opening bracket we will push it 
	     int flag = 0;
	     //flag variable will help us to know if the string is balanced or not
	     char x;
	    for(int i =0;i<s.length();i++){
	        if(s[i]== '('|| s[i]=='{'|| s[i]=='[' ){
	            k.push(s[i]);
	        }
	        // if stack is empty then the first element isn't a opening bracket so not a balanced string
	        else if(k.empty()){
	            flag =1;
	            break;
	        }
	        //if we encounter a closing bracket then for it to be balanced internally , we should have encountered its opening counterpart, if not then not balanced
	        else if (s[i]==')'){
	            x = k.top();
	            k.pop();
	            if(x != '('){
	                flag =1;
	                break;
	            }
	        }
	        else if (s[i]=='}'){
	            x = k.top();
	            k.pop();
	            if(x!= '{'){
	                flag =1;
	                break;
	            }
	        }
	        else if(s[i]==']'){
	            x= k.top();
	            k.pop();
	            if(x!='['){
	                flag=1;
	                break;
	            }
	        }
	        
	    }
	     //if after traversing, elementes still remain then it is unbalanced
	     if(!k.empty()){
	         flag =1;
	     }
	     if(flag ==1){
	         cout<<"NO"<<endl;
	     }else{
	         cout<<"YES"<<endl;
	     }
	     
	     
	     
	     
	     
	     
	     
	     
	     
	     
	     
	     
	 }
	 
	return 0;
}