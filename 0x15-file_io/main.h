#ifndef main_H
#define main_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
#endif
