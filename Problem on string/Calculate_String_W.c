#include<stdio.h>
#define FAILURE -1

int StrlenX(char *str)
{
    int icnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        icnt++;
        str++;
    }
    return icnt;
}


int main()
{
    char arr[20]={'\0'};
    int ivalue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%[^'\n']s",arr);

    iRet=StrlenX(arr);
    printf("The String count is %d ",iRet);

    return 0;
}