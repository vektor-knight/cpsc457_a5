#include <stdio.h>
#include "queue.h"

void queue_initialize(prod_cons_queue *q) {
	// All queue variables initialized to NULL:
	q->head = NULL;
	q->tail = NULL;
	q->remaining_elements = MAX_QUEUE_SIZE;

	// init. all queue vars
	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
		q->element[i] = NULL; // All queue element pointers set to null
	}
}
