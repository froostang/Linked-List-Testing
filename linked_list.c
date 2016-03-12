#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGE_SIZE 256

struct node {
char message [MAX_MESSAGE_SIZE];
int item_number;
struct node* next;
};

void add_node(struct node* head){
printf("%d\n", head->item_number);
free(head);
};


void iterate_list(){};
void print_list(){};
void delete_and_exit(){};

int main(){

struct node* head = NULL;
head = (struct node*)malloc(sizeof(struct node));
strcpy(head->message, "LIST HEAD");
head->item_number = 0;

int user_input = NULL;
printf("What would you like to do? \n");
printf("1: Add Item \n");
printf("2: Print List \n");

scanf("%d",&user_input);

switch(user_input){
    case 1:add_node(head); break;
    case 2:print_list(); break;
    case 3:delete_and_exit(); break;
    default: printf("error"); break;
}

return 0;
}
