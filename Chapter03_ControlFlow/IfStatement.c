#include <stdio.h>

int main()
{
    int age_jan = 26;  //Age from Jan
    int age_marc = 26; // Age from Marc

    if (age_jan < age_marc)
    {
        printf("Jan is younger than Marc!");
    }
    else if (age_jan > age_marc)
    {
        printf("Jan is older than Marc!");
    }
    else
    {
        printf("Jan and Marc have the same age!");
    }

    return 0;
}
