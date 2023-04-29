#include <stdio.h>
void array(int n,int*a){
    for(int i=0;i<n;i++)
    {
           printf("%d ",a[i]);
        }
}
int main(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    array(n,a);
}
