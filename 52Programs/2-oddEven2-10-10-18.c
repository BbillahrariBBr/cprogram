#include<stdio.h>
#include<string.h>
int main()
{
    int T, i;
    char n [101];
    scanf("%d",&T);

    for(i = 1 ; i<= T; i++){
        scanf("%s",&n);
        int k = strlen(n);
        int p = n[k-1]-48; // char to int convert

        if (p%2==1){
            printf("odd\n");
        }
        else{
            printf("even\n");
        }

    }
    return 0;
}
