#include<stdio.h>
#include<string.h>
void main()
{char rems[20];
int a,i;
int k=0;
printf("Enter the number:"); 
scanf("%d",&a);
//convert to binary
 
while(a>0){
int rem;
rem=a%2;
rems[k]=(char)rem+'0';
k++;
a=a/2;}
printf("Before:");

for(i=0;i<k;i++){
printf("%c",rems[i]);
}

printf("\tAfter:");
for(i=k-1;i>=0;i--){
printf("%c",rems[i]);
}
}
