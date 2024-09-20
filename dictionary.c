#include "dictionary.h"

void initializeDataDictionary(const char *dictionary) {

    long mainHeader= EMPTY_POINTE;
    int stringToSave = 0;
    
    printf("Initializing Data Dictionary...\n");
    FILE *dictionary = fopen(dictionary, " ");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    printf("How many strings would you like?");
    scanf("%d", &stringToSave);

    for(int counter=0; counter<stringToSave; counter++)
    {
        NODE currentNode;

        currentNode. next = EMPTY_POINTER;

        printf("Enter a value for a node #%d: ", counter);
        scanf("^[\n]", currentNode.value);
        fgets(&(currentNode. value), sizeof(currentNode.value), dictionary);
        
    }

    return EXIT_SUCESS;
    
}
