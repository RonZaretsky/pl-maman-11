#include <stdio.h>

int count_bits(unsigned long);

int main()
{
    unsigned long num;
    printf("\n|-*-*-START-*-*-|\n");
    do
    {
        printf("\nInsert number: ");
        scanf("%lu", &num);
        // num = 200;
        printf("\nYour number is: %ld", num);
        printf("\nThe number of even bits that are ON in this number is: %d\n\n\n", count_bits(num));

    }while(getchar()!=EOF);
    
    return 0;
}

int count_bits(unsigned long n) {
    int count = 0;
    for (int i = 0; i < sizeof(unsigned long); i+=2) {
        if ((n & (1 << i)) != 0) {
            count++;
        }
    }
    return count;
}