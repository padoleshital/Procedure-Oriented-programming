#include<stdio.h>
#define FAILURE -1

int StrlenX(char *str)
{
    int icnt=0;
    if(str==NULL)
    {
        return -1;
    }
    if(str[icnt]!='\0')

    {
        icnt++;
    }
    return icnt;
}

int main()
{
    char arr[20]={'\0'};
    int iRet=0;
    int ivalue=0;
    printf("Enter String ");
    scanf("%[^'n']s",arr);
    
    iRet=StrlenX(arr);
    printf("Your String count is %d ",iRet);

    return 0;
}