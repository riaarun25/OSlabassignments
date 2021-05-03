#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
int main() 
{ 
    int pid, pid1, pid2; 
    pid = fork(); 
    if (pid == 0) 
    { 
        sleep(3); 
        printf("child.z\npid = %d and ppid = %d\n\n",getpid(), getppid()); 
    } 
  
    else { 
        pid1 = fork(); 
        if (pid1 == 0) { 
            sleep(2); 
            printf("child.y\npid = %d and ppid = %d\n\n",getpid(), getppid()); 
        } 
        else { 
            pid2 = fork(); 
            if (pid2 == 0) 
            { 
                printf("child.x\npid = %d and ppid = %d\n\n",getpid(), getppid()); 
            } 
    else 
    { 
        sleep(3); 
        printf("parent\npid = %d\n", getpid()); 
    } 
        } 
    } 
  
    return 0; 
}
