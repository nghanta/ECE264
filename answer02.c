#include <stdlib.h>
#include "answer02.h"

size_t my_strlen(const char * str)
{
  while(*str++)
    {
      return str;
    }
   return 0;
}

int my_countchar(const char * str, char ch)
{

  int count = 0;

  while(*str++)
    {
      if(str[*str-1] == ch)
	{
	  count++;
	}
    }
  return count;
}

char * my_strchr(const char * str, int ch);
{
  while(*str++)
    {
      if(str[*str-1] == ch)
	{
	  *str = *str - 1;
	  size_t length = my_strlen(const char * str);
	  size_t n_length = length - *str;
	  char * n_char[n_length];
	  int i = 0;
	  while(*str++)
	    {
	      n_char[i] = str[*str-1];
	      i++;
	    }
	  return n_char;
	}
      else
	{
	  return NULL;
	}
    }
  return();
}

char * my_strrchr(const char * str, int ch)
{
  int check = 0;
  while(*str++)
    {
      if(str[*str-1] == ch)
	{
	  int index = *str - 1;
	  check = 1;
	}
    }
  if(check)
    {
      int n_char[*str-2-index]
      *str = index;
      while(*str++)
	{
	  n_char[*str-1-index] = str[*str-1];
	}
      return n_char;
    }
  else if(*str)
    {
      return NULL;
    }
  return();
}

  
