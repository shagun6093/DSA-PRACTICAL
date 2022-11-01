//stacks using array 

//header file
#include<stdio.h>
#include<stdlib.h>

int stack[100],i,value,top=0,n;
//push
void push(){
    int val;
    if(top==n){
        printf("stack is overflow\n");
    }
    else{
        printf("enter the value to insert:\n");
    scanf("%d",&val);
    top++;
        stack[top]=val;
        
        
    }
}
//pop

void pop(){
    if(top==-1){
        printf("stack is underflow\n");
    }
    else{
        printf("value poped from the stack is %d\n",stack[top]);
        
        top--;
        
    }
}
//peek
void peek(){
     if(top==0){
        printf("stack is empty\n");
    }
    else{
        top--;
        printf("Top element of the stack is : %d\n",stack[top+1]);
        
        
    }
}

//display
void display()
{
    for(i=top;i>0;i--){
        
printf("\nstack is :\n");
printf("%d\n",stack[i]);
        
    }
    if(top==-1)
    printf("stack is empty\n");

}

//main fuction

void main(){
    int choice=0;
    
    printf("enter the total number in the stack\n");
    scanf("%d",&n);
    
    printf("**************stack functions***************\n");
    while(1){
        printf("1.push \t 2.pop \t 3.peek\t 4.display\t 5.exit\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            push();
            break;
            
             case 2:
            pop();
            break;
            
             case 3:
            peek();
            break;
            
             case 4:
            display();
            break;
            
             case 5:
            exit(0);
            break;
            
            default:printf("invalid:\n");
        }
    }
}















