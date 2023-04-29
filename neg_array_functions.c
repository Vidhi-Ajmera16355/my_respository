#include <stdio.h>
void array(int n,int*p){
    printf("Negative array elements are:\n");
    for(int i=0;i<n;i++)
    {
        if(p[i]<0){
           printf("%d ",p[i]);
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
