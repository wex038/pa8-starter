#include "cutest/CuTest.h"
#include "heap.h"
#include <stdio.h>
#include <stdlib.h>
    
/* 
 * Add your tests here
 * A few sample tests 
 * are provided
 */

void TestHeap(CuTest *tc) {
  Heap* h = makeHeap(10);
  CuAssertIntEquals(tc, 0, h->size);
	cleanupHeap(h);
}

void TestOne(CuTest *tc) {
  int two = 2;
  int four = 4;
  CuAssertIntEquals(tc, four, two+two);
}

void TestTwo(CuTest *tc) {
  char* lol = "lol";
  char* alsoLol = "lol";
  CuAssertIntEquals(tc, lol, alsoLol);
}

CuSuite* StrUtilGetSuite() {
  CuSuite* suite = CuSuiteNew();
  SUITE_ADD_TEST(suite, TestHeap);
  SUITE_ADD_TEST(suite, TestOne);
  SUITE_ADD_TEST(suite, TestTwo);
  return suite;
}


// Don't edit below this line

void RunAllTests(void) {
  CuString *output = CuStringNew();
  CuSuite* suite = CuSuiteNew();
  CuSuite* ourSuite = StrUtilGetSuite();
  
  CuSuiteAddSuite(suite, ourSuite);

  CuSuiteRun(suite);
  CuSuiteSummary(suite, output);
  CuSuiteDetails(suite, output);
  printf("%s\n", output->buffer);

  CuStringDelete(output);
  CuSuiteDelete(suite);
  free(ourSuite);
}

int main(void) {
  RunAllTests();
  return 0;
}

/*
int main_() {
  Heap* h = malloc(sizeof(Heap));
  h->elements = malloc(sizeof(Pair) * 5);
  h->size = 0;
  h->capacity = 5;

  insert(h, 60, strdup("hi"));
  insert(h, 40, strdup("yo"));
  insert(h, 30, strdup("yo"));
  insert(h, 20, strdup("yo"));
  insert(h, 10, strdup("yo"));
  insert(h, 50, strdup("yo"));

  printHeap(h);

  poll(h);
  printHeap(h);
  poll(h);
  printHeap(h);
  poll(h);
  printHeap(h);
  insert(h, 22, strdup("another"));
  printHeap(h);

  printf("%d\n", isHeap(h));


}
*/
