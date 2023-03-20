#include<stdio.h>
#include<string.h>
struct player
{
    char pname[20];
}pl;
char* play(struct player *temp_pl)
{
    strcpy(temp_pl->pname,"kholi");
    return temp_pl->pname;
}
int main()
{
    strcpy(pl.pname,"dhoni");
    printf("%S %S",pl.pname,play(&pl));
    return 0;
}