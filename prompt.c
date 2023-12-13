#include "shell.h"

int prompt()

/**
 * prompt - a function that displays a prompt on screen and waits for user input
 *
 * Return: 0 on success
 */
int prompt()
{
    char command[100];
    
    while (1) {
        printf("$ ");
        fgets(command, sizeof(command), stdin);
        
        // Remove the newline character at the end of the command
        command[strcspn(command, "\n")] = '\0';
        
        // Execute the command here...
        
        // Repeat the prompt
        printf("\n");
    }
    
    return 0;

}