#include <stdio.h>

int main()
{
    unsigned char c1 = 128;//Data for part 2
    char c2 = 128;

    int i = 0;
    //Part 1
    printf("Char size is %ld\n", sizeof(char));
    printf("Short size is %ld\n", sizeof(short));
    printf("Int size is %ld\n", sizeof(int));
    printf("Long size is %ld\n", sizeof(long));
    printf("Float size is %ld\n", sizeof(float));
    printf("Double size is %ld\n", sizeof(double));
    printf("Long Double size is %ld\n\n", sizeof(long double));
    //Part 2
    if (c1 == c2)
        printf("Char is unsigned\n\n");
    else
        printf("Char is signed\n\n");
    //Part 3
    /*printf("Lets watch how 0-9 symbols are placed: ");
    if ('0' <= '9')
        c = '0';
    else
        c = '9';
    for(i = 0;i < 10;i++,c++)
        printf("%c",c);
    printf("\n");

    printf("Lets watch how a-z symbols are placed: ");
    if ('a' <= 'z')
        c = 'a';
    else
        c = 'z';
    for(i = 0;i < 26;i++,c++)
        printf("%c",c);
    printf("\n");

    printf("Lets watch how A-Z symbols are placed: ");
    if ('A' <= 'Z')
        c = 'A';
    else
        c = 'Z';
    for(i = 0;i < 26;i++,c++)
        printf("%c",c);
    printf("\n");

    printf("Now lets see what code do '0'-'9','a'-'z' and 'A'-'Z' have:\n");
    printf("'0'-'9' = %d - %d\n",'0','9');
    printf("'a'-'z' = %d - %d\n",'a','z');
    printf("'A'-'Z' = %d - %d\n",'A','Z');*/
    //Part 3
    char nums[10] = "0123456789";
    char lat[26]  = "abcdefghijklmnopqrstuvwxyz";
    char latB[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int check[3] = {1,1,1};
    for(i = 0;i < 10;i++)
    {
        printf("Code of %c is %d,\n",nums[i],nums[i]);
        if(i < 9 && nums[i]+1 != nums[i+1] && check[0])
            check[0] = 0;
    }
    printf("\n");
    for(i = 0;i < 26;i++)
    {
        printf("Code of %c is %d,\n",lat[i],lat[i]);
        if(i < 25 && lat[i]+1 != lat[i+1] && check[1])
            check[1] = 0;
    }
    printf("\n");
    for(i = 0;i < 26;i++)
    {
        printf("Code of %c is %d,\n",latB[i],latB[i]);
        if(i < 25 && latB[i]+1 != latB[i+1] && check[2])
            check[2] = 0;
    }
    printf("\n");
    if (check[0])
        printf("Numbers go one bye one.\nTheir codes are: '%c'-'%c' ~ %d - %d\n",'0','9','0','9');
    if (check[2])
        printf("Big english letters go one bye one.\nTheir codes are: '%c'-'%c' ~ %d - %d\n",'A','Z','A','Z');
    if (check[1])
        printf("English letters go one bye one.\nTheir codes are: '%c'-'%c' ~ %d - %d\n",'a','z','a','z');


    return 0;
}
