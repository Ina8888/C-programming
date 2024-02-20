#include <stdio.h>
#include <string.h>

int main(void){

    char str[100];
    printf("\n Enter string:");

    char sym = '\n';
    fgets(str, 100, stdin);     // priema masiv posle sa max elementi i nakraq ukazatel kym fila koito shte chete
        //although ima problem- printira se sys nov red, i zatova izpolzvame strchr za da mahnem noviq red
    char *p = strchr(str, sym);     //ideata e noviqt symbol koito da mehnem s pomoshta na tazi func da e noviqt red - \n
    if(p != NULL){
        *p = '\0';
    }
    
    printf("\n %s", str);

}