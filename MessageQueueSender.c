#include <stdio.h>
#include <stdlib.h>
#include <sys/msg.h>

struct message {
  char messageText[];
  long long messagetype;
}

int main()
{
  pid_t pid;
  
}
