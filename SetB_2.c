#include <stdio.h>
#include<string.h>
struct data{
    char child[60];
    char father[60];
};
int main()
{
    struct data d[10];
    FILE *fp;
    int i=0,k=0,count=0,m=0,t;
    int a[50];
    char line[50];
    fp=fopen("file.txt","r");
    char buf[60];
	while(fscanf(fp,"%s",buf) != EOF )
	{
	    if(k%2==0){
	    strcpy(d[i].child,buf);
		//printf("%s\n",d[i].child);
		k++;
		}
		else{
	    strcpy(d[i].father,buf);
		//printf("%s\n",d[i].father);
		k++;
		i++;
		}

	}
//	for(i=0;i<5;i++){    
   // printf("\nchild:%s, Father:%s",d[i].child,d[i].father);    }    
    fclose(fp);
    printf("Enter the name of the person whose grandchildren you want to calculate:");
    scanf("%s",line);
    //printf("%s",line);
    int j;
    for(j=0;j<i;j++){
        if(strcmp(line,d[j].father)==0){
            a[m]=j;
            m++;
            }
    }
    for(i=0;i<m;i++){
       // printf("%d",a[i]);
    }
    for(t=0;t<m;t++){
    for(i=0;i<k;i++){
        if(strcmp(d[a[t]].child,d[i].father)==0){
            count++;
        }
    }
    }
    printf("count:%d",count);
}
