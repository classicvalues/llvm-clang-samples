__attribute__((global)) void ker1(float* farr, double* darr, int n) {
}

__attribute__((device)) void notakernel(int n, float* f1) {
}

typedef int* intptr;

__attribute__((global)) void ker2(unsigned* uarr, intptr iarr) {
}

void foobar() {
}
