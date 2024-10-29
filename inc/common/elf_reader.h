#ifndef _ELF_READER_H_
#define _ELF_READER_H_
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "ram.h"

typedef struct {
    char *name;
    size_t offset;
    size_t size;
    size_t addr;
    bool loadable;
} rv_elf_section_info;


int read_elf(FILE *file, size_t *entry_point, ram_t *ram);

#endif /* _ELF_READER_H_ */
