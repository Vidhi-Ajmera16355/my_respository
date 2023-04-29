#include <stdio.h>
void array(int n,int*a){
    int min=a[0];
    int max=a[0];
    for(int i=0;i<n;i++)
    {
           printf("%d ",a[i]);
        }
    for(int i=0;i<n;i++)
    {
        if (a[i]<min)
        min=a[i];
        if (a[i]>max)
        max=a[i];
        }
        printf("\nMinimum element in array is %d ",min);
        printf("\nMaximum element in array is %d ",max);
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
