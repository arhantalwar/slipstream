#ifndef SLIPSTREAM_H_
#define SLIPSTREAM_H_

#include <pthread.h>

typedef struct {
    void* async_args_t;
    void* (*function) (void*);
} async_t;

// Function prototypes
void async(async_t data);

#endif // SLIPSTREAM_H_
