#include "dictionary.h"

void initializeDataDictionary(const char *dictionary) {

    long mainHeader= EMPTY_POINTE;
    
    printf("Initializing Data Dictionary...\n");
    FILE *dictionary = fopen(dictionary, " ");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);
    fseek(dictionary, 50, SEEK_SET);
    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);
    
}
