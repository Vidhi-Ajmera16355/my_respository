#include <stdio.h>
void array(int n,int*a){
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
           printf("%d ",a[i]);
        }
        printf("\n");
    for(int i=0;i<n;i++)
    {
        if (a[i]%2==0){
            printf ("%d,",a[i]);
            even++;
        }
        
        else {
            printf("%d,",a[i]);
            odd++;
        }
    }
        printf("\nEven number element in array is %d ",even);
        printf("\nOdd number element in array is %d ",odd);
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
