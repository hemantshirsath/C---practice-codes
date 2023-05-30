#include<iostream>
#include<stack>
using namespace std;
bool paramatch(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        string postfix;
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
        {
            postfix=postfix+ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            if(st.empty()){
                return false;
            }
            char k=st.pop();
            if()
        }
    }
}
int main()
{
    string str;
    cout<<"Enter a string "<<endl;
    cin>>str;

    return 0;
}