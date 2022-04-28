#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *f;
    f=fopen("output.txt","wb+");
    char x;
    while((x=getchar())!= '\n'){     
        if(isdigit(x))continue;

        if(isupper(x))x=tolower(x);
        else if(islower(x))x=toupper(x);  
        fputc(x,f);    
    } 
    fclose(f); 
    return 0;
}
