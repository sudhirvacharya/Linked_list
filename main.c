#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    char data[40];
    struct node *next_node;
   /* data */
}node_s;

node_s *__head=NULL;

int init(char *data){

    __head=malloc(sizeof(node_s));

    if(!__head){
        printf("memory allocation failed \n");
        return -1;
    }
    __head->next_node=NULL;

    memcpy(__head->data, data, strlen(data));
    return 0;
}
int main()
{
    init("hello");
    return 0;
}