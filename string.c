// Code using strlen()

#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Somsubhra";
    printf("Length of string = %lu", strlen(str));

    return 0;
}

//Code using strcpy()

#include<stdio.h>
#include<string.h>

int main() {
    char s1[50] = "Pokemon";
    char s2[50];

    strcpy(s2,s1);
    printf("Copied string is : %s",s2);

    return 0;

}

// Code using strcat
#include<stdio.h>
#include<string.h>

int main() {
    char str1[] = "Hi";
    char str2[] = "Arjun";
    
    strcat(str1,str2);

    printf("Concatenated string is : %s",str1);

    return 0;
}

// Code using strcmp
#include<stdio.h>
#include<string.h>

int main() {
    char j[] = "pink";
    char p[] = "blue";

    if(strcmp(j,p) == 0) {
        printf("Equal");
    } else {
        printf("Not Equal");
    }

    return 0;
}

// Code using strrev
#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Computer";

    printf("Reverse = %s", strrev(str));

    return 0;
}

//  Code for strupr
#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "programming";

    printf("Uppercase = %s", strupr(str));

    return 0;
}

// Code using strstr()

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is C programming";
    char sub[] = "C";

    if (strstr(str, sub))
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;
}



