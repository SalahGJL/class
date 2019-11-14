#include <stdio.h>
#include <stdlib.h>

int limit = 4;// la taill du tableau


int recherche(float *T,int num)
{
    int index = -1;
    for(int i=0; i<limit; i++)
    {
        if(T[i] == num) index = i;
    }
    return index;
}

void saisirTab(float *T)
{
    for(int i=0;i<limit;i++){
        scanf("%f", &T[i]);
    }
}
void afficheTab(float *T)//
{
    for(int i=0;i<limit;i++){
        printf("  %2.2f .",T[i]);
    }
}
float getSomme(float *T)
{
    float som=0;
    for(int i=0;i<limit;i++){
        som =T[i]+som;
    }
    return som;
}
float getMax(float *T)
{
    int j=0;
    float a=0;

    while(j<limit){
        if(a<T[j])
            a=T[j];
    j++;
    }
    return a;
}

float getMoy(float *T)
{
    return getSomme(T)/limit;//return le moyenne : somme/nombre du notes
}

int getSup10(float *T)
{
    int n=0;
    for(int i=0;i<limit;i++){
        if(T[i]>=10){
            n++;
        }
    }
    return n;
}

