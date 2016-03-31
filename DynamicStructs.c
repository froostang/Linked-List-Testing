#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


struct car{
	char model[100];
	char make[100];
	char color[100];
	int cost;
};

void EnterInfo(struct car *data)
{
	printf("enter the model:\n");
	scanf("%s", data->model);
	printf("enter the make:\n");
	scanf("%s", data->make);
	printf("enter the color:\n");
	scanf("%s", data->color);
	printf("enter the cost:\n");
	scanf("%d", &data->cost);
}

void DisplayInfo(struct car *data)
{
	printf("--------------------------\n");
	printf("%s is the model\n", data->model);
	printf("%s is the make\n", data->make);
	printf("%s is the color\n", data->color);
	printf("%d is the model\n", data->cost);
}

struct car *mine;
int main()
{

mine = (struct car*)malloc(sizeof(struct car));
EnterInfo(mine);
DisplayInfo(mine);
free(mine);

}