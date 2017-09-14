#include"Header.h"

void  main()
	{
	 clock_t tic = clock();
    	 pid_t  pid;

    	 pid = fork();
	  	
    	 if (pid == 0) 
          ChildProcess();
   	  else 
          ParentProcess();
	  clock_t toc = clock();
	  printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	}

void  ChildProcess()
	{
    	 int   i;

    	  for (i = 1; i <= MAX_COUNT; i++)
          printf("   This line is from child, value = %d\n", i);
    	  printf("   *** Child process is done ***\n");
	}

void  ParentProcess()
	{
     	int   i;

	     for (i = 1; i <= MAX_COUNT; i++)
             printf("This line is from parent, value = %d\n", i);
	     printf("*** Parent is done ***\n");
	}


