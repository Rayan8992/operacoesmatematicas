#include <assert.h>

int multiplicar(int a, int b);
int dividir(int a, int b);

int main() {

    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(-4, 5) == -20);

    assert(dividir(10, 2) == 5);
    assert(dividir(-9, 3) == -3);

    return 0;
}
