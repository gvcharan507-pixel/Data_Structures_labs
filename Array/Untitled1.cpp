#include<stdio.h>
#define MAX 100
int arr[MAX], n=0;

void create(){
	int i;
	printf("Number of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++){
	 scanf("%d",&arr[i]);}
}

void display(){
	int i;
	if(n==0){
		printf("Array is empty\n:");
		return;
	}
	printf("Array elements:\n");
	for(i=0;i<n;i++){
		printf(" %d ",arr[i]);
	     printf("\n");	
	}
}

void insert(){
	int pos , val, i;
	if (n==MAX){
		printf("ARRAY IS FULL!: \n");
		return;
	}
	printf("Enter position (1 to %d) and value : ", n+1);
	scanf("%d%d", &pos, &val);
	if(pos<1||pos>n+1){
		printf("Invalid position:\n");
		return;
	}
	for(i=n-1;i>=pos-1;i--){
		arr[i+1] = arr[i];}
	arr[pos-1] = val;
	n++;
	printf("Inserted %d at position %d :\n",val,pos);	
}


void deleteElement(){
	int i,pos;
	if(n==0){
		printf("Array is empty:\n");
		return;
	}
	printf("Enter position (1 to %d) : ",n);
	scanf("%d", &pos);
	if(pos<1||pos > n){
		printf("Invalid position:\n");
		return;
	}
	for(i=pos-1;i<n-1;i++){
		arr[i] = arr[i+1];	
	
	}
	n--;
}
 void search(){
 	int i ,key;
 	printf("Enter element to search : \n");
 	scanf("%d",&key);
 	for(i=0;i<n;i++){
 		if(arr[i]==key){
 			printf("%d found at position %d:\n",key,i+1);
 			return;
		 }
		 }
	printf("Element not  found:\n");	 
 }


int main(){
	int ch;
	do { 
	    printf("\n 1.Create \n2.Dispaly\n3.Insert\n4.Delete\n5.search\n6.Exit\n");
	    printf("Enter your choice");
	    scanf("%d",&ch);
	    switch(ch){
	    	case 1: create(); break;
	    	case 2: display(); break;
	    	case 3: insert(); break;
	    	case 4: deleteElement(); break;
	    	case 5: search(); break;
	    	case 6: printf("Exiting...\n");break;
	    	default: printf("Invalid choice\n");
		}
	}while (ch !=6);
	return 0;
}	