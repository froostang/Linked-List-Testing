#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <memory.h>

struct class
{
char department[100];
int coursecode;
struct class *next;
};

void CreateList(struct class *data)
{
int count = 0;


while(count < 4)
	{
		printf("Please enter the department\n");
		scanf("%s", data->department);
		printf("Please enter the course code / number\n");
		scanf("%d", &data->coursecode);
		struct class *new = (struct class*)malloc(sizeof(struct class));
		data->next = new;
		data = data->next;
		count++;
	}

}


void WalkListandDisplay(struct class *walker)
{
	while(walker->next != NULL)
	{
		printf("department: %s\n", walker->department);
		printf("course code: %d\n", walker->coursecode);
		walker = walker->next;
	}

}

struct class *head;

int main()
{

head = (struct class*)malloc(sizeof(struct class));
CreateList(head);
WalkListandDisplay(head);

free(head);


	return 0;
}