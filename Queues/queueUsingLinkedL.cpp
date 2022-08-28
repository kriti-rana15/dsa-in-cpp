//QUEUE USING LINKED LIST
#include<iostream>
using namespace std;

class node{           //linked list's node
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class queue{            
    node* front;
    node* back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){         //pushing elements in queue's back
        node* n=new node(x);
        if(front==NULL){
            front=n;
            back=n;
        }
        back->next=n;
        back=n;
    }
    void pop(){            //popping elements from queue's front
        if(front==NULL){
            cout<<"underflow queue"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){              //printing the top element of the queue.
        if(front==NULL){
            cout<<"underflow queue"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){            //check whether the queue is empty or not?
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(4);
    q.push(3);
    q.push(5);
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