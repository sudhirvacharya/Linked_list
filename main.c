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

int add(char *data)
{
    node_s *new_node=malloc(sizeof(node_s));
    if(!new_node){
        printf("memory allocation failed \n");
        return -1;
    }

    new_node->next_node=__head;//just swaping here head poiter to new node next pointer
    memcpy(new_node->data, data, strlen(data));
    __head=new_node;//juts swaping head pointer to new node
    return 0;
}
void traverse()
{
    node_s *cursor=__head;
    while (cursor)
    {
        printf("%s \n", cursor->data);
        cursor=cursor->next_node;
    }
    
}
int main()
{
    init("hello");  //this will be the last node now,   last it will print last
    add("sudheer");//this will be the second node now, second   it will print second
    add("kumar"); //this will be the first node now, first it will print first
    traverse();
    return 0;
}