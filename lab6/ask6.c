/*Να γραφεί πρόγραμμα σε C που θα μετονομάζει ένα αρχείο. Το
όνομα του αρχείου θα δίνεται από τον χρήστη ως όρισμα. Θα
πρέπει να γίνεται έλεγχος εισόδου και να εμφανίζεται κατάλληλο
μήνυμα αν δε δοθεί κάποιο όρισμα*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main (int argc, char *argv []) 
{ 
    pid_t pid; 

    if(argc < 3)
    {
        printf("Wrong number of arguments\nUsage: ./a.out old_filename new_filename\n");
        exit(1);
    }

    pid = fork();
    
    if (pid == 0) 
    { 
        execlp("mv", "mv", argv[1], argv[2], NULL);
        printf ("execlp error\n");
        exit(1);
    }

    waitpid(-1, NULL, 0);

    return 0;
}
