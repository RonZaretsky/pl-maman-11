#include <stdio.h>
#include <string.h>

#define STR_MAX_SIZE 80



int my_strcmp(char [], char[]);
int my_strncmp(char [], char [], int);
int my_strchr(char [], char);

/*
main function
*/
int main()
{
    char str1[STR_MAX_SIZE];
    char str2[STR_MAX_SIZE];
    int iend;
    char csearch;
    
    while(getchar()!=EOF){
    /*
    asking user for paramters
    */
    printf("\n|-*-*-START-*-*-|\n");
 
    printf("\n Insert first string: ");
    scanf("%s", &str1);

    printf("\n Insert second string: ");
    scanf("%s", &str2);

    printf("\n Insert index you want to stop comparing: ");
    scanf("%d", &iend);

    printf("\n Insert char you want to search for:");
    scanf(" %c", &csearch);

    /*
    prints the results
    */
    printf("\n\n|-*-*-RESULTS-*-*-|\n");
    printf("\n my_strcmp(%s,%s) = %d", str1, str2,my_strcmp(str1,str2));
    printf("\n my_strncmp(%s, %s, %d) = %d", str1, str2, iend,my_strncmp(str1,str2,iend));
    printf("\n my_strchr(%s,%c) = %d", str1, csearch, my_strchr(str1,csearch));
    printf("\n my_strchr(%s,%c) = %d", str2, csearch, my_strchr(str2,csearch));

    printf("\n|-*-*-END-*-*-|\n");
    }
    return 0;
}

/*
compares two givven strings:
- returns positive number if str2 is before str1
- returns negative number if str1 is before str2
- returns 0 if the string are equal
*/
int my_strcmp(char str1[], char str2[])
{
    int i;

    for(i = 0; str1[i] || str2[i]; i++)
        if(str1[i] != str2[i])
            return str1[i]-str2[i];
    
    return 0;
}

/*
does the same as my_strcmp but it gets additional paramater
this parameters means how many charaters to compare
*/
int my_strncmp(char str1[], char str2[], int end)
{
    int i;

    for(i = 0; (str1[i] || str2[i]) && i!=end; i++)
        if(str1[i] != str2[i])
            return str1[i]-str2[i];
    
    return 0;
}

/*
this methods returns the index of givven char in the givven string.
it return only the first time it appears.
if the char is not in the string it return -1.
*/
int my_strchr(char str[], char c)
{
    int i;

    for(i = 0; str[i]; i++)
        if(str[i] == c)
            return i;

    return -1; 
}
