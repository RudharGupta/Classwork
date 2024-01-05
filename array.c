#include<stdio.h>
void main()
{
    int rollno[]={1,2,3,4},n,i,j;
    printf("enter the size of array");
    scanf("%d,&n");
    printf("enter the values");
    for(i=0;i<=n;i++){
        scanf("%d",&rollno[i]);
    }
    for(j=0;j<n;j+=2){
        printf("the even value is: %d",rollno[j]);
    }
    printf("%d\n");
}