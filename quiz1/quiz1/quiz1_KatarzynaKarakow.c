#include <stdio.h>
#include "Box.c"

int main() {
	struct Box* boxA;
	boxA = (struct Box*)malloc(sizeof(struct Box));
	boxA->num = 10;

	struct Box* boxB;
	boxB = (struct Box*)malloc(sizeof(struct Box));
	boxB->num = 20;

	printf("%d\n", boxA->num);
	printf("%d\n", boxB->num);

	int c = boxA->num;
	boxA->num = boxB->num;
	boxB->num = c;

	printf("Swap:\n");
	printf("%d\n", boxA->num);
	printf("%d\n", boxB->num);
}