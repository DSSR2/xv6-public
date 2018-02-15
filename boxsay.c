#include "types.h"
#include "user.h"

int
main(int argc, char *argv[]){
  int i;
  int b;
  if(argc==1)
    exit();
  b=0;
  for(i=1;i<argc;i++)
    b+=strlen(argv[i])+1;
  for(i = 1; i < b+8; i++)
    printf(1, "_");
  printf(1,"\n||  ");
  for(i=1; i< argc; i++)
	printf(1, "%s%s", argv[i], i+1 < argc ? " " : " ");
  printf(1," ||\n");
  for(i = 1; i < b+8; i++)
    printf(1, "`");
  printf(1,"\n");
exit();
}
