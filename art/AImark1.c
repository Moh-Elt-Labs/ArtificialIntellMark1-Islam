// from https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1044652485&id=1043284385



#include <stdio.h>
#include <string.h>

int main()
{
//variable declaration
    char buf[BUFSIZ];
    char *p;
    char salahalaalnabi[] = "اللهم صل على سيدنا محمد وعلى آله وصحبه أجمعين";
    printf ("Please enter a line of text, max %d characters\n", sizeof(buf));

    if (fgets(buf, sizeof(buf), stdin) != NULL)
    {
        if(strcmp(salahalaalnabi,buf) == 0)
            printf("اللهم صل على سيدنا محمد وعلى آله وصحبه أجمعين");

        printf ("The fact you stated is >%s<\n", buf);
            // Now test for, and remove that newline character
            if ((p = strchr(buf, '\n')) != NULL)
                *p = '\0';

        printf ("The fact you stated is now :I dont know but >%s< i think\n", buf);
    }

    return 0;
}

// Program Aims:
//to further research artificial intelligence using human patterns of behaviour and humans relationship with Allah
//by moheltbusiness@gmail.com

