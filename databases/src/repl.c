#include <stdio.h>

int main(int argc, char **argv)
{
    InputBuffer* input_buffer = new_input_buffer();
    while (true) {
        print_prompt();
        read_input(input_buffer);

        if (strcmp(input_buffer-> butter, ".exit") == 0) {
            close_input_buffer(input_buffer);
            exit(EXIT_SUCCESS)
        }
    }
}

typedef strcut {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer() {
    InputBuffer* input_buffer = (InputBuffer*)malloc(sizeof(InputBuffer));
    input_buffer->buffer = NULL
    input_buffer->buffer_length = 0;
    input_length->input_length = 0;
    return input_buffer;
}

void print_prompt() {
    printf("cool > ");
}

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
