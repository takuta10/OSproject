#include <stdio.h>
#include <stdlib.h>
#include "buffer.h"
//testcomment
typedef int buffer item;
#define BUFFER SIZE 5

/* the buffer */
buffer item buffer[BUFFER SIZE];

int insert item(buffer item item) {
	/* insert item into buffer
	return 0 if successful, otherwise
	return -1 indicating an error condition */
}

int remove item(buffer item *item) {
	/* remove an object from buffer
	placing it in item
	return 0 if successful, otherwise
	return -1 indicating an error condition */
}

void *producer(void *param) {
	buffer item item;
	while (true) {
		/* produce an item in next produced */
		...
		wait(empty);
		wait(mutex);
		...
		/* add next produced to the buffer */
		...
		signal(mutex);
		signal(full);
		
		/* sleep for a random period of time */
		sleep(...);
		/* generate a random number */
		item = rand();
		if (insert item(item))
			fprintf("report error condition");
		else
			printf("producer produced %d\n",item);
	}
}

void *consumer(void *param) {
	buffer item item;
	while (true) {
		wait(full);
		wait(mutex);
		...
		/* remove an item from buffer to next consumed */
		...
		signal(mutex);
		signal(empty);
		...
		/* consume the item in next consumed */
		
		/* sleep for a random period of time */
		sleep(...);
		if (remove item(&item))
			fprintf("report error condition");
		else
			printf("consumer consumed %d\n",item);
	}
}

int main(int argc, char *argv[]) {
	int n;
	semaphore mutex = 1;
	semaphore empty = n;
	semaphore full = 0;
	
	/* 1. Get command line arguments
	argv[1],argv[2],argv[3] */
	scanf("%d", n);
	/* 2. Initialize buffer */
	/* 3. Create producer thread(s) */
	/* 4. Create consumer thread(s) */
	/* 5. Sleep */
	/* 6. Exit */
}