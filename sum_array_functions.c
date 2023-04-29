#include <stdio.h>
void array(int n,int*a){
    int sum=0;
    for(int i=0;i<n;i++)
    {
           printf("%d ",a[i]);
           sum+=a[i];
        }
        printf("\nSum of all elements of an array: %d",sum);
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
