#include<stdio.h>
struct teamscore
{
    int wickets;
    int score;

}ts={2,325};
struct country
{
    char *name;
}coun ={"india"};
int main()
{
    struct teamscore tcon=ts;
    printf("%d %s %d",tcon.score,ts.wickets,coun.name);
    return 0;
}