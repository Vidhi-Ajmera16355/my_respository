#include <stdio.h>
void array(int n,int*a){
    for(int i=0;i<n;i++)
    {
        if(a[i]<0){
            printf("Negative array elements are:\n")
           printf("%d ",a[i]);
        }
     
    }
}
int main(){
    int n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    array(n,a);
}
