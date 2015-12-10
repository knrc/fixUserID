#include <stdio.h>

// Really an octal size but is therefore larger then needed
#define BUFFER_SIZE ((sizeof(char) * sizeof(int)) / 3 + 40)

int main()
{
    int uid = getuid();
    char buffer [BUFFER_SIZE]; // Enough plus space 

    setuid( 0 );

    snprintf(buffer, BUFFER_SIZE, "/usr/sbin/usermod -u %d jboss", uid);
    system(buffer);

    return 0;
}
