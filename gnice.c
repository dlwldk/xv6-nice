#include "types.h"
#include "stat.h"
#include "user.h"

int main(){
 int pid=getpid();
 //scanf(0, "%d\n", &pid);
 int nice=getnice(pid);
 if(pid==-1)
  printf(1, "해당 pid가 존재하지 않음\n");
 if(nice==-1)
  printf(1, "해당 nice값이 유효하지 않음\n");
 else
  printf(1, "value : %d\n", nice);
 return 1;
}
