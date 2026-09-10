#include <stdio.h>

int main() {
    int a[6] = {
        1,
        3,
        2,
        1,
        5
    };
    int n = sizeof(a) / sizeof(a[0]);
    int pos = 2;
    int val = 7;
    int sea_num=1;
    
    printf("original array\n");
    traverse(a, n);
    insert(a, pos, val, n);
    del(a,pos,n);
    sea(a,sea_num,n);
}

void traverse(int * a, int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);

    }
    printf("\n");
}

void insert(int * a, int pos, int val, int n) {

    for (int i = n; i > pos-1; i--) {

        a[i] = a[i - 1];
    }
    a[pos] = val;
    printf("\nafter addition\n");
    traverse(a, n);
}

void del (int*a,int pos,int n){
    a[pos]=0;
    for(int i=pos; i<n; i++){
        a[i]=a[i+1];
    }
    printf("\nafter deletion\n");
    traverse(a,n);
}

void sea(int*a,int sea_num, int n){
    int found=0;
    for(int i=0;i<n;i++){
        if( a[i]==sea_num){
            found=1;
            printf("the position of number is %d", i+1);
            break;
        }}
    if(found==0){
        printf("num not found");
        }
    }

        
        
    
