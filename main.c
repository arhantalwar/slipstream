#include "slipstream.h"
#include <stdio.h>

typedef struct {

    int a;
    int b;

} add_args;

void* add(void* arg) {

    add_args* args = (add_args*)arg;
    printf("add of %d and %d is %d\n", args->a, args->b, (args->a+args->b));
    return NULL;

}

int main() {

    async_t data;
    data.function = &add;

    for (int i = 0; i < 100; i++) {

        add_args argument = { .a = i, .b = i+1 };
        data.async_args_t = (void*)&argument;

        printf("I = %d\n", i);

        async(data);

    }

    return 0;

}
