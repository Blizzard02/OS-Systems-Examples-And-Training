/*Να γραφεί πρόγραμμα σε C που θα δημιουργεί μία συνάρτηση
η οποία θα τυπώνει μια μεταβλητή στην οθόνη. Η μεταβλητή
μπορεί να είναι τύπου int , float , double ή char . Η συνάρτηση
θα δέχεται μόνο 2 ορίσματα. Ένα generic type pointer (void *)
και ένα κάτι (enum, int , string...) που θα προσδιορίζει τον τύπο
δεδομένων της μεταβλητής.
*/

#include <stdio.h>

enum data_type
{
    INT, CHAR, FLOAT
};

void print(void *ptr, enum data_type d);

int main(int argc, char *argv[])
{
    enum data_type d;
    int a = 10;
    char b = 'A';
    float c = 1.5;

    d = INT;
    print(&a, d);

    d = CHAR;
    print(&b, d);

    d = FLOAT;
    print(&c, d);

    return 0;
}

void print(void *ptr, enum data_type d)
{
    if(d == INT)
        printf("%d\n", *(int *)ptr);

    if(d == CHAR)
        printf("%c\n", *(char *)ptr);

    if(d == FLOAT)
        printf("%f\n", *(float *)ptr);    
}
