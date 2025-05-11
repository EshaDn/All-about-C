//Function with no arguments but return value
#include <stdio.h>
int find_max();
void main(){
    int z;
    z=find_max();
    printf("Maximum is %d",z);
}
int find_max(){
    int x,y,max;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    if (x>y){
        max=x;
    }
    else{
        max=y;
    }
    return max;
}
