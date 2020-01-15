/*20180531*/
/*This program implement five string functions(without using any of the functionin the standard C library except for isdigit) that process arrays of characteres.*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define CHECK(EXPR) printf("%s...%s\n", (EXPR) ? "passed" : "FAILED", #EXPR)


/*
-Return 1 if the string s consists entirely of digits; otherwise, return 0
*/

int str_all_digits(const char s[])
{
    size_t i;
    for(i= 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
            return 0;
    }

    return 1;

}

/*
-Returns 1 if the string s contains a digit; otherwise, returns 0
*/

int str_has_digit(const char s[])
{
    size_t i;
    for(i= 0; s[i] != '\0'; i++)
    
        if (isdigit(s[i]))
        {
            return 1;
        }

    return 0;

}

/*
-Replaces all occurrences of the character oldc in the string s by the character newc.
- Return the number of replacements
*/
size_t str_replace_all(char s[], int oldc, int newc)
{
    size_t i;
    size_t index =0;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] ==oldc)
        {
            s[i]=newc;
            index ++;
                
        }
            
    }
    return index;    
}
/*
-Replaces only the first occurrence of oldc in the string s by newc.
-Returns 1 if a replacement has been made; otherwise returns 0
*/

int str_replace_first(char s[],int oldc, int newc)
{
    size_t i;

    for(i =0; s[i] != '\0'; i++)
    {
        if(s[i] == oldc)
        {
            s[i] = newc;
            return 1;
        }
    }
    return 0;

}

/*
-Replaces only the last occurrence of oldc in the string s by newc.
-Returns 1 if a replacement has been made; otherwise return 0.
*/

int str_replace_last(char s[], int oldc,int newc)
{

    size_t i; 
    size_t num = -1;
	for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == oldc)
        {
            num = i;
            
        }


    }
    
    if (num != (size_t) -1)
    {
        s[num] = newc;
        return 1;
    }

	return 0;
    
}

int main(void)
{
    char a[]="se7sa";
    char b[]="53628";
    char c[]="sduahFsd";

    char d[]="se7sa";
    char e[]="53628";
    char f[]="sduahFsd";

    char g[]="dfsa7sa687";
    char h[]="nzai76D533aaa";
    char i[]="12345674893043";

    char j[]="se7sa";
    char k[]="Ds5ag7dsa38dsa";
    char l[]="0123456789";

    char m[]="dsahyRs5y";
    char n[]="das67B5KDS99";
    char o[]="hello";

    CHECK(str_all_digits(a)==0);
    /*printf("%d\n", str_all_digits(a));*/
    CHECK(str_all_digits(b)==1);
    /*printf("%d\n", str_all_digits(b));*/
    CHECK(str_all_digits(c)==0);
    /*printf("%d\n", str_all_digits(c));*/

    
    CHECK(str_has_digit(d)==1);
    /*printf("%d\n", str_has_digit(d));*/
    CHECK(str_has_digit(e)==1);
    /*printf("%d\n", str_has_digit(e));*/
    CHECK(str_has_digit(f)==0);
    /*printf("%d\n", str_has_digit(f));*/

    CHECK(str_replace_all(g,'s','K')==2);
    printf("%s\n", g);
    CHECK(str_replace_all(h,'a','K')==4);
    printf("%s\n", h);
    CHECK(str_replace_all(i,'e','K')==0);
    printf("%s\n", i);

    CHECK(str_replace_first(j,'s','K')==1);
    CHECK(str_replace_first(k,'a','K')==1);
    CHECK(str_replace_first(l,'p','K')==0);

    CHECK(str_replace_last(m,'y','K')==1);
    printf("%d\n", str_replace_last(m,'y','K'));
    CHECK(str_replace_last(n,'9','K')==1);
    CHECK(str_replace_last(o,'h','4')==0);
    
    return 0;
}
