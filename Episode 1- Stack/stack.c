#include <stdio.h>

int arr[6];
int top=-1;

void push(int x){
    if(top<6){
        top++;
        arr[top]=x;
    }
    else {
        printf("Overflow");
    }
}

void pop(){
    if(top>=0){
        top--;  
    }
    else{
        printf("Stack Underflow");
    }
}


void peek(){
    printf("Top Value is :%d",  arr[top]);
}


void display(){
    for(int i=0; i<=top; i++){
        printf("\n%d", arr[i]);
    }
}


void main(){


// push(5);
// push(8);
// push(9);
// push(5);
// push(8);
// push(9);

display();
pop();

// printf("Top is : %d\n", top);

display();


// peek();

// printf("%d\n",arr[0]);
// printf("%d\n",arr[1]);
// printf("%d\n",arr[2]);
// printf("%d\n",arr[3]);
// printf("%d\n",arr[4]);
// printf("%d\n",arr[5]);

}