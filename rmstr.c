#include<stdio.h>
#include<conio.h>
int main()
{
    int i,ip=0,r=0,count[255]={0};
    char str[200],rm[10],temp;
    printf("Enter the String\n");
    scanf("%s",str);
    printf("Enter character to remove\n");
    scanf("%s",rm);

    for(i=0;*(rm+i);i++)
        count[*(rm+i)]++;

    for(i=0;*(str+i);i++)
    {
        temp=*(str+i);
        if(count[*(str+i)]==0)
        {
           *(str+r)=*(str+ip);
           r++;
        }
        ip++;
    }
   *(str+r) = '\0';
    printf("%s",str);
}
