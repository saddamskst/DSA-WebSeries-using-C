#include <stdio.h>

#define Size 6

struct Stack
{
    int arr[Size];
    int top; 
};


void push(struct Stack * ptr, int Value){
    if(ptr->top<Size){
        ptr->top++;
        ptr->arr[(ptr->top)]=Value;
    }
    else{
        printf("Overflow");
    }
}

void pop(struct Stack * ptr){
    if((ptr->top)>=0){
        ptr->top--;
    }
    else{
        printf("Stack Underflow");
    }
}

void peek(struct Stack * ptr){
    printf("Top Value is :%d",  ptr->arr[ptr->top]);
}

void display(struct Stack * ptr){
    if((ptr->top)>=0){
        for(int i=0; i<=(ptr->top); i++){
            printf("\n%d", ptr->arr[i]);
        }
    }
}

void main(){
    struct Stack Stk;
    Stk.top=-1;

    // struct Stack Stk={ .top=-1};

    push(&Stk , 10);
    push(&Stk , 80);
    push(&Stk , 90);
    push(&Stk , 100);
    push(&Stk , 110);
    display(&Stk);
    printf("\n----------");
    pop(&Stk);
    pop(&Stk);
    pop(&Stk);
    display(&Stk);
    // peek(&Stk);
}