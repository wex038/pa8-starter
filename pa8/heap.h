#include <stdbool.h>

struct Pair {
  int key;
  char* value;
};

typedef struct Pair Pair;

struct Heap {
  int capacity;
  int size;
  Pair* elements;
};

typedef struct Heap Heap;

Heap* makeHeap(int capacity);
void add(Heap* heap, int priority, char* value);
char* removeMin(Heap* heap);
char* peek(Heap* heap);
int size(Heap* heap);
bool isHeapAt(Heap* h, int index);
void printHeap(Heap* h);
void cleanupHeap(Heap* h);
void bubbleDown(Heap* h, int index);
boid bubbleUp(Heap* h, int index);
void expandCapacity(Heap* h);
void swap(Heap* h, int index1, int index2);
