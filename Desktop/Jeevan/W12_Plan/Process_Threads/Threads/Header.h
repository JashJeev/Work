 #include<stdio.h>
 #include<pthread.h>
 #include<semaphore.h>
 #include<time.h>
 int buf[5],f,r;
 sem_t mutex,full,empty;
