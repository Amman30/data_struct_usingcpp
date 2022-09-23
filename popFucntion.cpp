#include <iostream>
using namespace std;
#define MAX 100
int stackk[MAX];
int top=-1;


void push(){
    int x;
    cout<<"Enter number u want to add "<<endl;
    cin>>x;
    if(top==99){
        cout<<"Stack OverFlow"<<endl;
        return;
    }
    else{
        top++;
        stackk[top]=x;
       
    }
}
int pop(){
    if(top==-1){
        cout<<"Stack UnderFlow: "<<endl;
        return 0;
    }
    else{
        int val=stackk[top];
        top--;
        return val;
    }
    
}

void print(int N){
    cout<<"Stack Created is: "<<endl;
    for(int i=0;i<N;i++){
       
        cout<<stackk[i]<<" "<<endl;
    }
}


int main(){
    int N;
    cout<<"Enter how many numbers u want to add in the stack"<<endl;
    cin>>N;
    for(int i=0;i<N;i++){
        push();
    }
    print(N);

    int popCount;
    cout<<"How many times do you want to call the pop fucntion:"<<endl;
    cin>>popCount;
    for(int j=1;j<=popCount;j++){
        cout<<j<<" POP "<<pop()<<endl;
    }
    
    return 0;
}
