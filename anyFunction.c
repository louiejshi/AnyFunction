// C Programming
//
//  Exercise_2-5
//
//  Created by Louie Shi on 7/13/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAXSIZE 1000

bool lookForChar(char s[], int c);
int any(char s1[], char s2[]);

// Looks through a string to find a character
// Returns true if character is found
// Returns false if character is not found
bool lookForChar(char s[], int c)
{
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == c)
        {
            return true;
        }
    }
    return false;
}

// Returns the first location in the string s1 where any character
// from the string s2 occurs, or -1 if s1 contains no characters
// from s2
int any(char s1[], char s2[])
{
    int i;
    bool value = false;
    
    for(i = 0; i < strlen(s2); i++)
    {
        value = lookForChar(s1, s2[i]);;
        if(value)
        {
            break;
        }
    }
    
    if(i == strlen(s2))
    {
        return -1;
    }
    else
    {
         return i;
    }
}

int main(int argc, const char * argv[])
{
    char str1[MAXSIZE] = "louie";
    char str2[MAXSIZE] = "youchen";
    int value = any(str1, str2);
    
    printf("The value printed is either the index in s2 or -1 if not found! \n");
    printf("The value is: %d\n", value);
    
    return 0;
}
