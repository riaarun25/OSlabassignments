# Parent and child process #

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

--------------------------------------------------------------------------------------

# Zombie process #

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main ()
{
    pid_t child_pid;child_pid = fork ();
    if (child_pid > 0) 
    {
        sleep (60);
    }
    else 
    {
        exit (0);
    }
    return 0;
}

--------------------------------------------------------------------------------------

# Orphan process #

#include<stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
  
int main() 
{ 
    int pid = fork(); 
  
    if (pid > 0) 
        printf("in parent process"); 

    else if (pid == 0) 
    { 
        sleep(30); 
        printf("in child process"); 
    } 
  
    return 0; 
}

--------------------------------------------------------------------------------------

# Make a process sleep #

#include<stdio.h>
void main()
{
    int sec;
    printf("Enter number of seconds to sleep: ");
    scanf("%d",&sec);
    printf("\nSleeping...\n");
    sleep("%d");
    return 0;
}

--------------------------------------------------------------------------------------

# Thread to check whether a number is prime or composite #

#include <stdio.h>
#include <pthread.h>
int pthread_equal(pthread_t tid1, pthread_t tid2);
int main() 
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.\n");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}
