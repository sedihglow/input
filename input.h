/*
 * Various functions using read and stdio for handling reads and buffers 
 * Written by: James Ross
 */

#ifndef _INPUT_H_
#define _INPUT_H_

#include <stdio.h>
#include <unistd.h>

#define RESET_BFPL 1
#define KEEP_BFPL  0

ssize_t read_input(int fd, char *buff, int nbyte);

int parse_buff(int fd, char *buff, int reset_flag, char delim);

#endif
