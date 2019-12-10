#include <stdio.h>
#include <stdlib.h>

int create_node(int value);
void bubble_sort();
void print_node();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	srand((unsigned)time(NULL));
	for (i=0;i<10;i++)
		{
		create_node(rand()%13);	
		bubble_sort();
		print_node(i);
	}
	return 0;
}
