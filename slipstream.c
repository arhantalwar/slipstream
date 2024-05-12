#include "slipstream.h"
#include <stdio.h>

void async(async_t data) {
    pthread_t async_thread_t;

    int async_thread = pthread_create(
        &async_thread_t,
        NULL,
        data.function,
        data.async_args_t);
}
