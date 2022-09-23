#include <iostream>
using namespace std;
#define MAX 100
int stackk[MAX];
int top=-1;

int isFull(){
    if(top==MAX-1)
        return 1;
    else
        return 0;
}

int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}




void push(){
    int x;
    if(isFull()){
        cout<<"Stack OverFLow \a"<<endl;
        cout<<"----------------------------------"<<endl;
        return;
    }
    else{
        cout<<"Enter the Element: \a"<<endl;
        cin>>x;
        top++;
        stackk[top]=x;
        cout<<"--------------STORED--------------------"<<endl;
    }
   
}


void pop(){
    if(isEmpty()){
        cout<<"Stack UnderFLow \a"<<endl;
        cout<<"-----------------UNDERFLOW!!!!---------------"<<endl;
        return ;
    }
    else{
        int val=stackk[top];
        top--;
        cout<< val<<" "<<endl;
        cout<<"-----------------POPED!!!!-------------------"<<endl;
    }
   
}






int main(){
    while (1) {
        int choice;
        cout<<"1) Push "<<endl;
        cout<<"2) Pop "<<endl;
        cout<<"3) Print the TOP element "<<endl;
        cout<<"4) Print all elements "<<endl;
        cout<<"5) Quit "<<endl;
        cout<<"-------------------CREATED-BY-AMMAN-----------------------"<<endl;
        
        cin>>choice;
        
        if(choice==1){
            int temp;
            cout<<"How many elements you want to enter: \a"<<endl;
            cin>>temp;
            for(int i=0;i<temp;i++){
                push();
            }
           
        }
        if(choice==2){
            pop();
        }
        if(choice==3){
            cout<<"Topest Element in stack is: \a"<<stackk[top]<<endl;
            cout<<"-----------------TOPPEST-------------------------"<<endl;
        }
        if(choice==4){
            if(isEmpty()){
                cout<<"Stack UnderFLow \a"<<endl;
                exit(1);
            }
            for(int i=top;i>=0;i--){
                cout<<stackk[i]<<" ";
                cout<<"---------------ALL ELEMENTS----------------"<<endl;
            }
            
            }
             
        
        if(choice==5){
            return 0;
        }
    }
  
    
    
    
    return 0;
}
