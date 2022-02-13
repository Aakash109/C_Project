
#include <stdio.h>

int main()
{
    int b,i,j,r=0,x,count=0,k,s=0;
    char a[200];
    printf("ENter");
    scanf("%d",&b);
    scanf("%d",&x);
    for(i=0;i<b;i++){
    scanf("%c",&a[i]);}
    //for(i=0;i<b;i++){
    //printf("%c",a[i]);}
f:   

if(b>2){
    for(i=0;i<b;i++){
        count=0;
        s=0;
        if(a[i]==a[i+1]){
            count=count+1;
            if(count==1){r=i+1;
                goto check;
            }
            }
        else{continue;}
                check:
                //printf("_______________");
                for(k=0;k<b;k++){
                   if(k!=r && k!=r-1)
                    {
                        a[s]=a[k];
                       // printf("\n1st%c",a[s]);
                        s++;
                    }
                }
                b=s;
                //printf("\n The value of b is:%d",b);
                goto f;
        }
        
    }

else{
    if(a[0]==a[1]){
        printf("Empty");
        goto done;
    }
    else{
        
        goto finish;}
}
finish:
    for(i=0;i<b;i++){
        printf("%c",a[i]);
    }
done:
    return 0;
}
