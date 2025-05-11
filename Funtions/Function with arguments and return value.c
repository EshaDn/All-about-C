//Function with arguments and return value
#include <stdio.h>
int find_max(int,int);
void main(){
    int x,y,z;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    z=find_max(x,y);
    printf("Maximum is %d\n",find_max(x,y));
}
int find_max(int x, int y){
    int max;
    if (x>y){
        max=x;
    }
    else{
        max=y;
    }
    return (max);
}
