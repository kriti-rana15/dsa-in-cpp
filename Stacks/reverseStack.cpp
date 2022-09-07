#include<iostream>
#include<stack>
using namespace std;
void reverseString(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word=word+s[i]; 
           i++;
        }
         st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    reverseString("Hey, how are you");
    return 0;
}

//...... Output = you are how Hey,
