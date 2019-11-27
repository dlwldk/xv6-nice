#include "types.h"
#include "stat.h"
#include "user.h"

int main(){
 int pid=8;
 int val=25; //nice값
 // scanf(0, "%d %d", &pid, &val);
 if(setnice(pid, val)==-1)
  printf(1, "해당 nice값이 범위에 벗어남\n");
 return 0;
}
