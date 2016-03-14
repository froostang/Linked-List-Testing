#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGE_SIZE 256

struct node {
char message [MAX_MESSAGE_SIZE];
int item_number;
struct node* next;
};

struct linked_list{
struct node* first;
struct node* last;
};


struct node* add_node(struct node* node){
char message [MAX_MESSAGE_SIZE];
int item_number;

printf("Please enter a message\n");
fgets(message, sizeof(message), stdin);

struct node* new_node = (struct node*)malloc(sizeof(struct node));

node->next = new_node;

item_number= node->item_number;

strcpy(new_node->message, message);
new_node->item_number = ++item_number;
new_node->next = NULL;

return new_node;
};


void print_list(struct node* node){

do{
printf("Message: %sList Number: %d \n",node->message,node->item_number);
node=node->next;
}while(node);

printf("End of list\n");
};




void delete_and_exit(struct linked_list* linked_list) {

struct node* node = linked_list->first;
struct node* temp = NULL;
struct node* next = NULL;

do {
temp=node;
next=node->next;
free(temp);
if(next){
    node=next;
}
}while(next);

free(linked_list);
printf("Cleared Mem\n");
exit(0);

};


int main(){


struct node* head = (struct node*)malloc(sizeof(struct node));
struct linked_list* linked_list = (struct linked_list*)malloc(sizeof(struct linked_list));
linked_list->first = head;
linked_list->last = head;

strcpy(head->message, "LIST HEAD \n");
head->item_number = 1;
head->next = NULL;


int user_input;
char buf1 [10];

while(1){

    printf("What would you like to do? \n");
    printf("1: Add Item \n");
    printf("2: Print List \n");
    printf("3: Delete and Exit \n");

    fgets(buf1, sizeof(buf1), stdin);
    user_input = atoi(buf1);

    struct node* last_node = NULL;

    switch(user_input){
        case 1:
        last_node = add_node(linked_list->last);
        break;

        case 2:
        print_list(linked_list->first);
        break;

        case 3:delete_and_exit(linked_list); break;
        default: printf("error"); break;
    }

    if(last_node!=NULL)
        linked_list->last = last_node;

}

return 0;
}
