#include <stdio.h>
void array(int n,int*p){
    int i, m, x, pos;
 
    printf("Enter the number of elements in the array \n");
    scanf("%d", &m);
    printf("Enter the elements \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\nEnter the new element to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);
    for(i = m-1; i >= pos; i--)
    {    p[i+1]=p[i];
 
    p[pos]=x;
        m++;
    }
    for (i = 0; i < m; i++)
    {
        printf("%d ", p[i]);
    }
}
int main(){
    int n;
    printf("Enter size of an array:\n");
    scanf("%d",&n);
    int a[n];
    array(n,a);
}
