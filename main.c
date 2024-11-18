#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s,j,v,z;
    printf("Vitajte v bludisku\n");
    printf("Cestu von najdete len s pouzitim matematiky\n");
    printf("Mozte ist na sever =1, juh=2, vychod=3, zapad=4\n");

    printf("Vyber si 1,2,3,4\n");
    scanf( "%d", &a);
    printf("vybral si si %d \n", a);
    if (a = 1)  goto sever;
    if (a = 2)  goto juh;
    if (a = 3)  goto vychod;
    if (a = 4)  goto zapad;



sever:
    {
        int b;
    printf("si na severe");
    printf("musis vyriesit priklad\n");
    printf("kolik je dva a dva\n");
    scanf( "%d", &b);
    if (b == 4 )
        {
        printf( " spravne");
        printf( " vyhral si ");
    }
    else printf("spatne");
        goto end ;
}
juh:
    {

        int b;
    printf("si na juhu");
    printf("musis vyriesit priklad\n");
    printf("kolik je dva a dva\n");
    scanf( "%d", &b);
    if (b == 4 ) printf( " spravne");
    else printf("spatne");
        goto end ;
     }
vychod:
    {
         int b;
    printf("si na vychode");
    printf("musis vyriesit priklad\n");
    printf("kolik je dva a dva\n");
    scanf( "%d", &b);
    if (b == 4 ) printf( " spravne");
    else printf("spatne");
        goto end ;
        }
zapad:
    {
         int b;
     printf("si na zapade");
     printf("musis vyriesit priklad\n");
    printf("kolik je dva a dva\n");
    scanf( "%d", &b);
    if (b == 4 ) printf( " spravne");
    else printf("spatne");
        goto end ;
        }

end:
    printf("konec hry");


    return 0;
}
