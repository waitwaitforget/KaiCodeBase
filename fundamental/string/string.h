#include <assert.h>
#include <cstddef>

size_t strlen(const char* str) {
    const char *p;
    for (p = str; *p; p++) {}
    return (size_t)(p - str);
}

char* strcpy(char *to, const char *from) {
    assert(to != nullptr && from != nullptr);
    char *p = to;
    while ((*p++ = *from++) != '\0')
        ;
    return to;
}