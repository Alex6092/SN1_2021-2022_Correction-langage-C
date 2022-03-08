#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>

char getch(void)
{
    char buf = 0;
    struct termios old = {0};
    fflush(stdout);
    if(tcgetattr(0, &old) < 0)
        perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if(tcsetattr(0, TCSANOW, &old) < 0)
        perror("tcsetattr ICANON");
    if(read(0, &buf, 1) < 0)
        perror("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if(tcsetattr(0, TCSADRAIN, &old) < 0)
        perror("tcsetattr ~ICANON");
    //printf("%d\n", buf);
    return buf;
 }


void mot_de_passe(char * str)
{
    int i = 0;
    while((str[i++] = getch()) != 10)
    {
        printf("*");
    }
    str[i] = '\0';
}


int main()
{
    printf("------ FONCTION MOT DE PASSE ------\n\n");

    char mdp[100];

    printf("Mot de passe : ");
    mot_de_passe(mdp);

    printf("\nLe mot de passe saisi est %s\n", mdp);

    return 0;
}




