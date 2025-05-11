//Function with no arguments and no return value
#include <stdio.h>
void find_max();
void main(){
    find_max();
}
void find_max(){
    int x,y,max;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    if (x>y){
        max=x;
    }
    else{
        max=y;
    }
    printf("Maximum is %d",max);
}
