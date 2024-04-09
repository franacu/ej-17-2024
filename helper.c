//
// Created by Fran on 09/04/2024.
//

#include "helper.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
char interseccion(char *c1,char *c2)
{
    int x=strlen(c1);
    int y= strlen(c2);

    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(c1[i]==c2[j])
            {
                return c1[i];
            }
        }
    }
    return '\0';
}