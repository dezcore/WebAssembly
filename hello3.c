#include <stdio.h>
#include <emscripten/emscripten.h>

int test() {
    printf("Hello test ! ");
    return 0;
}

int main(int argc, char ** argv) {
    printf("Hello World\n");
}

#ifdef __cplusplus
extern "C" {
#endif

void EMSCRIPTEN_KEEPALIVE myFunction(int argc, char ** argv) {
  test();
  printf("MyFunction Called\n");
}

#ifdef __cplusplus
}
#endif
