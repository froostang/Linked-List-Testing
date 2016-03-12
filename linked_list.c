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

printf("Please enter a message\n");
scanf("%s",message);

struct node* new_node = (struct node*)malloc(sizeof(struct node));

node->next = new_node;

strcpy(new_node->message, message);
new_node->item_number = node->item_number++;
new_node->next = NULL;

return new_node;
};


void print_list(struct node* node){
while(node->next!=NULL){
printf("%s\n",node->message);
printf("List Number: %d\n",node->item_number);
node=node->next;
}

printf("End of list\n");
};




void delete_and_exit(struct node* node) {

struct node* temp = NULL;

while(node->next!=NULL){
temp = node;
node=node->next;
free(temp);
}

printf("Cleared Mem\n");

};


int main(){


struct node* head = (struct node*)malloc(sizeof(struct node));
struct linked_list* linked_list = (struct linked_list*)malloc(sizeof(struct linked_list));
linked_list->first = head;
linked_list->last = head;

strcpy(head->message, "LIST HEAD");
head->item_number = 0;
head->next = NULL;


int user_input;

while(1){

    printf("What would you like to do? \n");
    printf("1: Add Item \n");
    printf("2: Print List \n");

    scanf("%d",&user_input);

    struct node* last_node = NULL;

    switch(user_input){
        case 1:
        last_node = add_node(linked_list->last);
        break;

        case 2:
        print_list(linked_list->first);
        break;

        case 3:delete_and_exit(linked_list->first); break;
        default: printf("error"); break;
    }

    if(last_node!=NULL)
        linked_list->last = last_node;

}

return 0;
}
