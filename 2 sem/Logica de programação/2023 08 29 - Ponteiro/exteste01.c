int main() {
    int x = 5;
    int *ptr = &x;  // ptr aponta para x

    printf("Valor de x: %d\n", x);
    printf("Endere�o de x: %p\n", &x);
    printf("Valor apontado por ptr: %d\n", *ptr);
    printf("Endere�o apontado por ptr: %p\n", ptr);

    return 0;
}
