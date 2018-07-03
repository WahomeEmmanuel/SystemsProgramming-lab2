#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int fd;

void myread()
{
  char buf[100];
  int fd1;
  fd1 = read(fd, buf, 100);
  if(fd1 == -1)
  {
    perror("Read error");
  }
  else{
    printf("File read successfully \n%s\n", buf);
  }
}

void myopen()
{
  fd = open("lab2file.txt",O_RDWR|O_APPEND);
  if (fd == -1)
  {
    perror("Open perror");
  }
  else
  {
    printf("File created successfully\n");
  }
}

void mywrite()
{
  char str[100];
  printf("Enter string you want to write to a file \n");
  scanf("%s",str);
  write(fd,str,strlen(str));
}

void mydelete()
{
  int ret = unlink("delete.txt");
  if(ret == -1)
  {
    perror("delete error");
  }
  else
  {
    printf("File deleted successfully.\n");
  }
}

void main()
{
  myopen();
  mywrite();
  myread();
}
