int dividir(int numero1, int numero2) {
    if (numero2 == 0) {
        return 0;
    }

    int quociente = 0;
    int negativo = 0;

    if (numero1 < 0) {
        numero1 = -numero1;
        negativo = !negativo;
    }

    if (numero2 < 0) {
        numero2 = -numero2;
        negativo = !negativo;
    }

    while (numero1 >= numero2) {
        numero1 = numero1 - numero2;
        quociente++;
    }

    if (negativo) {
        quociente = -quociente;
    }

    return quociente;
}
