#include<stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x ){
	if(top == MAX -1){
		printf("STACK OVERFLOW!");
		return;
	}
	stack[++top] = x;
	printf("%d pushed \n", x);
	
}

void pop(){
	if(top ==-1){
		printf(" Stack Under flow! \n");
		return;
	}
	printf("%d popped \n", stack[top--]);
	
}

void peek(){
	if(top==-1)
		printf("Stack under flow\n");
	else
	    printf("top element: %d\n",stack[top]);	

}

void display(){
	int i;
	if (top ==-1){
		printf("Stack is empty\n");
		return;
	}
	printf("Stack (top to bottom\n)");
	for(i=top;i>=0;i--)
	    printf("%d",stack[i]);
	    printf("\n");    
	
}


int main(){
	
	int ch,x;
	do{
		printf("\n1.push \n2.pop\n3.peek\n4.display\n5.exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:  printf("Enter value: "); scanf("%d",&x);push(x); break;
			case 2: pop(); break;
			case 3: peek();break;
			case 4: display(); break;
			case 5: printf("Exiting ...\n"); break;
			default: printf("Invalid choice\n");
		}
		
	}while(ch!=5);
	return 0;
	
	
	
}