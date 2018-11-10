/*
 * Various functions using read and stdio for handling reads and buffers 
 * Written by: James Ross
 */

#include "input.h"

/*
 * Uses the read() system call to read from the given file descriptor.
 * Result of the read is placed in the provided buffer.
 * nbyte is the size of the buffer.
 *
 * Reads nbyte-1 and places a '\0' value at end of the buffer
 *
 * Returns -1 on error, errno is set by the read system call
 */
ssize_t read_input(int fd, char *buff, int nbyte)
{
    ssize_t bytes_read;

    --nbyte;
    bytes_read = read(fd, buff, nbyte);

    if (bytes_read < nbyte)
        buff[bytes_read] = '\0';
    else
        buff[nbyte] = '\0';

    return bytes_read;
}

/*
 * Parses a given buffer to a given delimater and returns the string.
 * The place in the buffer will be saved and can be reset given the 
 * proper flag.
 *
 * RESET_PBUFF to reset the buffer placement
 * KEEP_PBUFF to maintain the place in the given buffer
 *
 * If the buffer ends before a given delemiter the fd will be read again until
 * the delimiter is found or EOF has occured.
 *
 * The resulting string will always end in a null value,
 * read_input() function above is used to re-read the file descriptor.
 *
 */
int parse_buff(int fd, char *buff, int reset_flag, char delim)
{
    static int bfpl = 0;
    char *res;

    if (reset_flag == RESET_BFPL)
        bfpl = 0;

    res = calloc(

    for (


}

