#ifndef PA02_H
#define PA02_H

#include <stdlib.h>


size_t s_length(const char * s); //length os string

int c_count(const char * s, char c); //counts character

char c_first(const char * s, int c); //finds first instance of character

char * c_last(const char * s, int c); //find last instance of character

char * cs_find(const char * phrase, const char * word); //finds a string of characters

char * s_copy(char * copy, const char * s); //makes a copy of sring

char * s_add(char * phrase, const char * word); //Adds word to end of phrase

int ws_c(int c); //Returns 1 if c is whitespace char, 0 otherwise

int s_int(const char * s); //converts initial portion of s to int

#endif
