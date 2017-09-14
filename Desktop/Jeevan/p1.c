#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

#define   MAX_COUNT  2
#define   BUF_SIZE   100

void  main(void)
{
     pid_t  pid;
     int    i;
     char   buf[BUF_SIZE];

    //  exec("ls");
     system("stat p1.c");
     pid=fork();

     if(pid == 0 )
       {
         
         printf("\n child :");

       }
     else
       {
         printf("\n parent :  waiting for child to terminate start");
         wait(0);
         printf("\n parent :  waiting  end");
       }  

     fork();
     pid = getpid();

    
     for (i = 1; i <= MAX_COUNT; i++) {
          sprintf(buf, "\nThis line is from pid %d, value = %d\n", pid, i);
          write(1, buf, strlen(buf));
          exit(0);

     } 
}
