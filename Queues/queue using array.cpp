#include<iostream>
using namespace std;

//QUEUE USING ARRAYS
#define n 20     //macro
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){       //pushing elements in back.
        if(back==n-1){
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }
    void pop(){        //popping elements from front.
        if(front==-1 || front>back){
            cout<<"no queue"<<endl;
        }
        front++;
    }
    int peek(){         //taking the top element of queue which is at front.
        if(front==-1 || front>back){
            cout<<"no queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){            //to check whether queue is empty or not ?
        if(front==-1 || front>back){
            return 1;
        }
        return false;
    }
};
int main(){
    queue q;          //object
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<" ";
    q.pop();
    cout<<q.peek()<<" ";
    q.pop();
    cout<<q.peek()<<" ";
    q.pop();
    cout<<q.peek()<<" ";
    q.pop();
    cout<<endl;
    cout<<q.empty()<<" ";
    return 0;
}