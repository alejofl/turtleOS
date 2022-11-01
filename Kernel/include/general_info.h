#ifndef GENERAL_INFO_H
#define GENERAL_INFO_H

#include <defs.h>

typedef struct pcbinfo {
    char * name;
    pid_t pid;
    uint64_t rsp;
    uint64_t rbp;
    unsigned int priority;
    status_t status;
    struct pcbinfo * next;
} PCBInfo;

typedef struct pipeinfo {
    unsigned int available_space;
    unsigned int left_to_read;
    unsigned int open_for_read;
    unsigned int open_for_write;
    struct pipeinfo * next;
} PipeInfo;

typedef struct seminfo {
    char * name;
    uint8_t value;
    unsigned int linked_processes;
    unsigned int blocked_processes;
    struct seminfo * next;
} SemInfo;

typedef struct meminfo {
    uint64_t memory_free;
    uint64_t memory_occupied;
    uint64_t memory_total;
    unsigned int memory_frags;
} MemInfo;

#endif