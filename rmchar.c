#include<stdio.h>
#include<conio.h>
int *getcount(char *rm)
{
    int i, count[255]={0};
     for(i=0;*(rm+i);i++)
        count[*(rm+i)]++;
        return count;
}
char *removechar(char *str,char *rm)
{
    int *count = getcount(rm);
    int i,ip=0,r=0;
    for(i=0;*(str+i);i++)
    {
        if(count[*(str+i)]==0)
        {
           *(str+r)=*(str+ip);
           r++;
        }
        ip++;
    }
   *(str+r) = '\0';
   return str;
}
int main()
{
    int i,ip=0,r=0;
    char str[200],rm[10];
    printf("Enter the String\n");
    scanf("%s",str);
    printf("Enter character to remove\n");
    scanf("%s",rm);
    printf("%s",removechar(str,rm));
}
