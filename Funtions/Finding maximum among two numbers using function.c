//Finding maximum among two numbers using function
#include <stdio.h>
int find_max(int,int);
void main(){
    int x=10,y=7;
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
