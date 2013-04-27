#include<stdio.h>
#include<conio.h>
main()
{
    char rm,str[100];
    int i=0,r=0,ip=0;
    printf("Enter the String\n");
    scanf("%s",str);
    printf("Enter character to remove\n");
    scanf("%c",&rm);

    for(i=0;*(str+i);i++)
    {

        if(rm!=*(str+i))
        {
            *(str+r)=*(str+ip);
            r++;
        }
        ip++;
    }
    *(str+r)='\0';
    //printf("%s",str);
}
