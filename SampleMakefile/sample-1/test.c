#include "api.h"

#define CHECK(X) ({int __val = (X); (__val == -1 ? \
			({fprintf(stderr, "ERROR(" __FILE__": %d) -- %s\n", __LINE__, strerror(errno));\
			 exit(-1);-1;}) : __val);})
// ERROR (cat.c:25) -- No such file or directory

int main() {
  // call a function in another file
  myPrintHelloMake();

  return(0);
}
