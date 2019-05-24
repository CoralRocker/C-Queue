#pragma once
#include <stdlib.h>
#include <string.h>

typedef struct Queue {
	int* arr;
	int size;
}Queue;

Queue* initQueue()
{
	Queue *q = malloc(sizeof(Queue));
	q->arr = NULL;
	q->size = 0;
}

void freeQueue(Queue *q)
{
	free(q->arr);
	free(q);
}

int frontQueue(Queue *q)
{
	if(q->size > 0)
		return q->arr[0];
	return 0;
}

int backQueue(Queue *q)
{
	if(q->size > 0)
		return q->arr[q->size-1];
	return 0;
}

void pushQueue(Queue *q, int val)
{
	int* tmp = malloc(sizeof(int)*q->size);
	memcpy(tmp, q->arr, sizeof(int)*q->size);
	free(q->arr);
	q->size++;
	q->arr = malloc(sizeof(int)*q->size);
	memcpy(q->arr, tmp, sizeof(int)*(q->size-1));
	free(tmp);
	q->arr[q->size-1] = val;
}

void popQueue(Queue *q)
{
	
}
