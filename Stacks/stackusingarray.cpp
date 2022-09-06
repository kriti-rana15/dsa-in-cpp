#include<iostream>
using namespace std;
#define n 100               //defining the size of n
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){        //size of stack is full
            cout<<"overflowed stack";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){           //no element left
            cout<<"No element left"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"empty stack";
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}