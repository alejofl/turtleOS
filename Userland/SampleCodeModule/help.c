#include <help.h>
#include <syslib.h>

void help(){
    const char* helpstring = 
    "help                 Provides help information for commands.\n"
    "mem                  Displays memory's state.\n"
    "ps                   Displays information about the active processes.\n"
    "loop                 Loops infinetly while greeting you once in a while.\n"
    "sem                  Displays information about active semaphores.\n"
    "pipe                 Displats information about active pipes.\n"
	"dividebyzero         Command to verify the operation of the exception routine\n"
    "                     \"Divide by zero\"\n"
    "invalidopcode        Command to verify the operation of the exception routine\n"
    "                     \"Invalid Opcode\"\n"
	"time                 Command to display the system day and time.\n"
    "prime                Dispalys prime numbers starting from 2.\n"
    "fibonacci            Dispalys fibonacci series numbers.\n";
    
    puts(helpstring);
}