#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
int main() 
{ 
        printf("\n I am main process pid = (%d)\n",getpid());
        char *const env[]={"ENV1=Hello","ENV2=World",NULL};
        execle("/home/student/Downloads/p2.out","arg1","arg2","arg3",NULL,env); 
 
        printf("This line will not be printed... "); 
      
    return 0; 
} 
