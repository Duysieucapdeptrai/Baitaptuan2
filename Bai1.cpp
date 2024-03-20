#include <stdio.h>
int bscua7(int so)
{
    return so %7==0;
}
int main(void){
    printf("cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    for(int i=10;i<=99;i++)
    {
        if(bscua7(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}
