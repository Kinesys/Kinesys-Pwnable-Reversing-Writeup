#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/mman.h>
#include<seccomp.h>
#include<sys/prctl.h>
#include<fcntl.h>
#include<unistd.h>

#define LENGTH 128

void sandbox() {
    scmp_filter_ctx ctx = seccomp_init(SCMP_ACT_KILL);
    
}
