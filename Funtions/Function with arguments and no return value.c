//Function with arguments and no return value
#include <stdio.h>
void find_max(int,int);
void main(){
    int x,y,z;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    find_max(x,y);
}
void find_max(int x, int y){
    int max;
    if (x>y){
        max=x;
    }
    else{
        max=y;
    }
    printf("Maximum is %d\n",max);
}
