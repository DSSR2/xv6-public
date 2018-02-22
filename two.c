#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
seek(int f){
  char buff[512];
  while(read(f, buff, 512)){

  }
  return 0;
}

int
main(int argc, char *argv[])
{
  int f;
  char newLine[1];
  newLine[0]='\n';
  f = open("cmds1", O_CREATE|O_RDWR);
  int n = strlen(argv[1]);
  //printf(1,"%s\n", argv[1]);
  seek(f);
  write(f, argv[1], n);
  write(f, newLine, sizeof(newLine));
  close(f);


  char buf[512];
  f = open("cmds1", O_RDONLY);
  read(f, &buf, n);
  printf(1, "%s\n", buf);
  close(f);
  exit();
  /*
  const int bufSize = 256;
  char buffer[bufSize];
  int fd = open("cmds", O_RDONLY);
  if(fd == -1){
printf(1,"%d",fd);
    exit();
  }
  while(read(fd,buffer,bufSize) > 0){
    printf(1,"%s", buffer);

    int i = 0;
    int x = strlen(buffer);
    for(i = 0; i < x; i++){
      if(buffer[i] == '\r')
        printf(1,"I am an end\n");
      if(buffer[i] == '\r')
        printf(1,"I am an enter\n");
      if(buffer[i] == '\n')
        printf(1,"I am an new line\n");
    }
    memset(buffer,0,bufSize);
  }
  close(fd);
  //退出程序
  exit();
  */
}
