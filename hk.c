#include<stdio.h>
int checkprimenumber(int i);
int main(){
int i,flag,n1,n2;
printf("enter two number");
scanf("%d%d",&n1,&n2);
printf("prime number is one");
for(i=n1+1;i<=n2;i++)
{
    flag=checkprimenumber(i);
    if(flag==1){
        printf("\n%d",i);
    }
}
return 0;

}
int checkprimenumber(int n){
int j,flag=1;
for(j=2;j<=n/2;j++){
    if(n%j==0)
    {
        flag=0;
        break;
    }
}
    return flag;
}