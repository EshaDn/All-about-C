#include <stdio.h>
int find_gcd(int x,int y)
{
    int i,res,min;
    min=x>y?x:y;
    for(i=1;i<=min;i++){
     if(x%i= = 0 && y%i= =0)
     res=i;
    }
    return res;
}
int main(){
    int x,y,res;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    res=find_gcd(x,y);
    printf("Gcd is %d",res);
}
