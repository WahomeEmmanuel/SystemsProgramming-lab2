#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void main()
{
  int fd;
  fd = open("lab2file.txt",O_RDWR|O_CREAT);
  if (fd == -1)
  {
    perror("Open perror");
  }
  else
  {
    printf("File created successfully\n");
  }
}
