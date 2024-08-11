#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the number of array elements\n");
    scanf("%d",&n);

    for ( int i=0; i<n ;i++ ){
    printf("enter the element at position %d\t",i+1);
    scanf("%d",&a[i]);
    }
    printf("before updating \n ");
     for( int i=0; i<n ;i++ ){
        printf("%d\t",a[i]);
      
     }
 printf("\n");
    for ( int i=0;i<n-1;i++){
        for (int j=i+1;j<n; j++){
            if(a[i]>a[j]){
                int t = a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("after updating\n");
     for( int j=0; j<n ;j++ ){
        printf("%d\t",a[j]);
     }
return 0;
}