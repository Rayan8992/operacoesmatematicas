#include <assert.h>
#include <stdio.h>

int multiplicar(int a, int b);
int dividir(int a, int b);

int main() {

    assert(multiplicar(2, 3) == 6);
    assert(multiplicar(5, 0) == 0);
    assert(multiplicar(-4, 3) == -12);
    assert(multiplicar(-4, -2) == 8);

    assert(dividir(10, 2) == 5);
    assert(dividir(9, 3) == 3);
    assert(dividir(8, 4) == 2);
    assert(dividir(15, 3) == 5);
    assert(dividir(-10, 2) == -5);
    assert(dividir(-12, -4) == 3);

    printf("Todos os testes passaram!\n");

    return 0;
}
