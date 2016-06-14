#include<stdio.h>
#include<stdlib.h>


void createElement(char* tag, char* classe, char* content);
void header (char* title, char* cssfile);
void ending();

int main()
{


    header("Titulo", "css/master.css");
    createElement("div", "classeloca", "teste connteudo");
    ending();

    return 0;
}


// ------------------------------------------------------------


void createElement(char* tag, char* classe, char* content)
{
    printf("<%s class='%s'>%s</%s>\n", tag, classe, content, tag);

}

void header (char* title, char* cssfile)
{
    printf("%s%c%c\n","Content-Type:text/html;charset=UTF-8",13,10);

    printf("<!DOCTYPE html>\n");

    printf("<html lang=\"pt\">\n");

    printf("<head>");

    printf("<meta charset=\"utf-8\">\n");
    printf("<title>%s</title>\n", title);
    printf("<link rel=\"stylesheet\" href=\"%s\">\n", cssfile);
    //printf("<script src=\"script.js\"></script>");

    printf("</head>\n");

    printf("<body>\n");
}

void ending()
{
    printf("</body>\n");
    printf("</html>\n");
}
