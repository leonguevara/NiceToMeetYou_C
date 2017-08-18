/*
  This program will ask the user for their name and then it
  will greet them using their name.  The program uses character
  arrays to handle strings just for didactic purposes.

  Author: ISC León Felipe Guevara Chávez, MATI, MA
  Date: May 20, 2017
*/

#include <stdio.h>		// Standard Input/Output
#include <string.h>		// String handling

int main() {
    // Declare your variables and constants before using them
    char userName[50];	// Can hold up to  50 characters
    char message[100];	// Can hold up to 100 characters

    printf("What is your name?");   // We ask for the user name
    scanf("%s", userName);          // We get their name from the stdin
    // We could have used gets(userName)

    /* We build the message string in the following lines: */
    //message = "Hello " + userName + "! Nice to meet you.";
    strlcpy(message, "Hello ", sizeof(message));
    strlcat(message, userName, sizeof(message));
    strlcat(message, "! Nice to meet you.", sizeof(message));

    printf("%s\n", message);	// We display the greeting message
    // We could have used puts(message)

    // Next line was the efficient way to do it
    // printf("Hello %s! Nice to meet you.\n", userName);

    return 0;   // We exit the program returning 0
}