int main() {
    char *string = "Hello World";

    /*
     * Compiles and in runtime throws `Segmentation fault (core dumped)`.
     * `string` actually should be defined as `const char *` for safety.
     *
     * That means, the `"Hello World"` string, is actually allocated on the
     * heap by the program, and **only** the program has access to that pointer.
     */
    string[0] = 'b';
    return 0;
}