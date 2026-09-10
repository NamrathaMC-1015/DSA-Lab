#include <stdio.h>

int main() {
	int a[8]={1,2,4,3,9,0};
	int last=6;
	
	// 1.traversal
	for(int i=0;i<=last;i++){
	    printf("%d, ",a[i]);
	}
	//2. liner search
	int key=9;
    for(int i=0;i<=last;i++){
        if(a[i]==key){
            printf("\nFound at index %d", i);
            break;
    }}
    //3.finding minimum
    int min=a[0];
    for(int i=0;i<=last;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("\nMinimum = %d",min);
    
    //4.finding maximum
    int max=a[0];
    for (int i=0;i<=last;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    printf("\nMaximum=%d\n",max);
	
	//5(a)insertion at pos 2
    int pos_p=2;
	int val=7;  
	
    for(int i=last;i>pos_p;i--){
        a[i]=a[i-1];
    }
    a[pos_p]=val;
    printf("Insertion at position(2)\n");
    for(int i=0;i<=last;i++){
	    printf("%d, ",a[i]);}
	printf("\n");
	
	//5(b).insertion at beginning
	int pos_b=0;
	
	for(int i=last;i>=pos_b;i--){
        a[i]=a[i-1];
    }
    a[pos_b]=val;
    printf("Insertion at beginning\n");
    for(int i=0;i<=last;i++){
	    printf("%d, ",a[i]);}
	printf("\n");

    //5(c).insertion at end 

    a[last+1]=5;
    last++;
    printf("Insertion at end\n");
        //traverse
    for(int i=0;i<=last;i++){
	    printf("%d, ",a[i]);}
	printf("\n");
	
	//6(b).deletion at beginning
	for(int i=0;i<=last;i++){
	    a[i]=a[i+1];
	}
	 //to remove 0 at end
	printf("Deletion at beginning\n");
	    //traverse
     for(int i=0;i<last;i++){
	    printf("%d, ",a[i]);}
	printf("\n");
    
    //6(a).deletion at pos2
    int del_p=2;
    
    for(int i=del_p;i<=last+1;i++){
        a[i]=a[i+1];
    }
    printf("Deletion at position(2)\n");
        //traverse
     for(int i=0;i<last;i++){
	    printf("%d, ",a[i]);}
	printf("\n");
	last--;
	
	//6(c).deletion at end
	last--; //to remove end element 
	
	printf("Deletion at end\n");
	    //traverse
     for(int i=0;i<last;i++){
	    printf("%d, ",a[i]);}
	printf("\n");
	
	//7. sum of elements
	int sum=0;
	
	for (int i=0;i<=last;i++){
	    sum=sum+a[i];
	}
	printf("sum = %d",sum);
	
	return 0;

}

