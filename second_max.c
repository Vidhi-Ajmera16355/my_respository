#include <stdio.h>
void array(int n,int*a){
    int smax=a[0];
    int max=a[0];
    for(int i=0;i<n;i++)
    {
           printf("%d ",a[i]);
        }
    for(int i=0;i<n;i++)
    {
        if (a[i]>max){
        smax=max;
        max=a[i];
        }
        else if (a[i]<max && a[i]>smax){
            smax=a[i];
        }
    }
        printf("\nMaximum element in array is %d ",max);
        printf("\nSecond Maximum element in array is %d ",smax);
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
