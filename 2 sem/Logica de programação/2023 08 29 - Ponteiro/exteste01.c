int main() {
    int x = 5;
    int *ptr = &x;  // ptr aponta para x

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor apontado por ptr: %d\n", *ptr);
    printf("Endereço apontado por ptr: %p\n", ptr);

    return 0;
}
