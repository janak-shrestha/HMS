#include <stdio.h>
#include <conio.h>
#include <string.h>
void demoChar (int arr[10][23])
 {
    for(int i =0; i<=9; i++)
    {
        for(int j =0; j<=22; j++)
        {
            int digit = arr[i][j];
            if(digit == 0)
            printf(" ");
            else
            printf("%d", digit);
            if(j == 22) 
            {
            printf("\n");
            }
        }  
    }
    printf("\n");  
}
int main()
{
    char ch[10];
    printf("Type what you want to display:- ");
    gets (ch);
    int x= strlen(ch);
    for (int a=0; a<x; a++)
    {
        if (ch[a]=='h' || ch[a]=='H')
        {
        int arrayH[10][23] =
        {
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        };
        demoChar(arrayH);
        }
        else if (ch[a]=='m' || ch[a]=='M')
        {
        int arrayM[10][23] = 
        {
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8,8},
        {8,8,8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8,8,8},
        {8,8,8, '\0', 8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8, '\0', 8,8,8},
        {8,8,8, '\0', '\0', 8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0',  8,8, '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', 8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0',  8,8, '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', 8,8, '\0', '\0', '\0', '\0', '\0',  8,8, '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', 8,8, '\0', '\0', '\0',  8,8, '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', 8,8, '\0',  8,8, '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        {8,8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8,8},
        };
        demoChar(arrayM);
        }
        else if (ch[a]=='s' || ch[a]=='S')
        {
        int arrayS[10][23] = 
        {
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
        {8,8, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8},
        {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 8,8},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        };
        demoChar(arrayS);
        }
        else
        {
            printf("ongoing remaining alphabet.\n");
        }

    }
    return 0;
}