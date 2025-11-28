int multiplicar(int a, int b) {
    int resultado = 0;

    int negativo = 0;
    if (b < 0) {
        b = -b;
        negativo = 1;
    }

    for (int i = 0; i < b; i++) {
        resultado = resultado + a;
    }

    if (negativo) {
        resultado = -resultado;
    }

    return resultado;
}
