#include <stdio.h>

void fibonacci() {
  int numTerms, i, t1 = 0, t2 = 1, nextTerm;

  printf("Enter the number of terms: ");
  scanf("%d", &numTerms);

  printf("Fibonacci Series: ");

  for (i = 1; i <= numTerms; ++i) {
    printf("%d, ", t1);
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
  }

 // return 0;
}

