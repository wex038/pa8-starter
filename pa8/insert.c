// Fix the bug in insert so that it continues to work, and so that
// running with the given main doesn't cause a valgrind error
// for an out-of-bounds memory access.
// Run with
//
// 		make insert
void insert(int* elts, int size, int index, int toInsert) {
	int i;
  for(i = size - 1; i >= index; i -= 1) {
    elts[i + 1] = elts[i];
  }
  elts[index] = toInsert;
  return;
}

