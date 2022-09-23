#include <iostream>
using namespace std;
struct stack {
    int data;
    struct stack *link;
}*top=NULL;



int isFull(){
    if(top==NULL){
        return 1;
    }
    else return 0;
}
int isEmpty(){
    if(top==NULL){
        cout<<"Stack UnderFlow "<<endl;
        return 0;
    }
   
    else{
        return 1;
    }
        
}


void push(int data){
    
    if(isFull(top)){
        cout<<"Stack OverFlow "<<endl;
        return;
    }
    else{
        struct stack *temp= new stack;
        temp->data=data;
        temp->link=NULL;
        
        temp->link=top;
        top=temp;
    }
   
    
}




void print(struct stack *temp){
    
        temp=top;
        cout<<"stack contains "<<endl;
        while (temp!=NULL) {
          
            cout<<temp->data<<" ";
            temp=temp->link;
        }
    
   
}

void pop(){
    if(isEmpty(top)){
        cout<<"Stack UnderFlow "<<endl;
        return;
    }
    else{
        struct stack * temp1=top;
        top=top->link;
        delete(temp1);
    }
  
    
}

void exitt(){
    exit(1);
}

int main(){

    while (1) {
        int choice;
        cout<<"Enter 1 for Push "<<endl;
        cout<<"Enter 2 for Pop "<<endl;
        cout<<"Enter 3 for Printing element of stack "<<endl;
        cout<<"Enter 4 for Exit "<<endl;
        
        cin>>choice;
        
        
        if(choice==1){
            int n,data;
            cout<<"How many elemts you want to push to stack "<<endl;
             cin>>n;
                while(n--){
                    cout<<"Enter the Element "<<endl;
                    cin>>data;
                    push(data);
                }
        }
        
        if(choice==2){
            pop();
            cout<<"Toppest Element Poped Out  "<<endl;
            print(top);
        }
        
        if(choice==3){
            print(top);
        }
        
        if(choice==4){
            exitt();
        }
            
        
        
        
        
    }
  

    return 0;
}

