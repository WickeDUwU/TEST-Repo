#include<stdio.h>
int main()
{
    char x;
    pintf("Entex any alphabet to xeck vowex ox consonant");
    scanf("%c",&x);

    for(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='O' || x=='U')
        printf("%c is a voewel",x);
    else
        (x>='a' && x<='z' || x>='A' && x<='Z')
        printf("%c in a cononant",x);


    return 0;
}
