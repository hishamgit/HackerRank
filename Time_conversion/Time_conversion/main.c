#include<stdio.h>
#include<string.h>
#includ<math.h>

int main()
{
    char time[11];
    scanf("%s",time);
    if(time[8]=='A')
    {
        if(time[0]=='1'&&time[1]=='2')
        {
            time[0]='0';
            time[1]='0';
        }
    }
    else if(time[8]=='P')
    {
        if(time[0]!='1'&&time[1] !='2')
        {
            time[0]=(time[0]-'0')+'1';
            time[1]=(time[1]-'0')+'2';
        }
    }
    time[8] = '\0';
    printf("%s\n",time);
    return 0;
}
