#include "words.hpp"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;




Words *newListFromSize(unsigned int max_words)
{
    if(max_words <= 0) {
        return nullptr;
    }
    Words* temp = new Words;
    temp->max_words = max_words;
    temp->list = new char*[0];
    temp->num_words = 0;
    return temp;
}

Words *newListFromString(const char *words)
{
    if(words == NULL) {
        return nullptr;
    }

    int wordLength = 0;
    for (int i = 0; words[i] != '\0'; i++) {
        if(words[i] == ' ') {
            wordLength++;
        }
    }
    //counting first word here
    wordLength++;
    Words* tempWords = new Words;

    tempWords->num_words = wordLength;
    tempWords->max_words = wordLength;


    //copying over data from const char* to char*
    //and mallocing over memory
    char* temp2 = (char*)malloc(sizeof(char) * (strlen(words)+1));
    strcpy(temp2, words);
    char* token = strtok(temp2, " ");
    char** temp3 = new char*[wordLength]; 
    int i = 0;
    //basically going through the split string and 
    //assigning each element of the char** 
    while(token) {
        temp3[i] = token;
        i++;
        token = strtok(NULL, " ");
    } 
    tempWords->list = temp3;
    return tempWords;
}

int deleteList(Words *p_w)
{
    if(p_w == NULL) {
        return -1;
    } else {
        delete[] p_w->list;
        delete p_w;
        return 0;
    }
}

int printList(Words *p_w)
{
    if(p_w == NULL) {
        return -1;
    }

    
    for (unsigned int i = 0; i < p_w->num_words; i++) {
        cout << p_w->list[i] << " ";
    }
    cout << endl;
    return 0;
}

int appendListFromString(Words *p_w, const char *words)
{
    if(p_w == NULL || words == '\0') {
        return -1;
    }
    
    //getting length of the word, copied from above 
    unsigned int wordLength = 0; 
    for (int i = 0; words[i] != '\0'; i++) {
        if(words[i] == ' ') {
            wordLength++;
        }
    }
    //counting first word here
    wordLength++;

    char* temp2 = (char*)malloc(sizeof(char) * (strlen(words)+1));
    strcpy(temp2, words);

    char* token = strtok(temp2, " ");
    char** temp3 = new char*[wordLength]; 
    int i = 0;
    //basically going through the split string and 
    //assigning each element of the char** 
    while(token) {
        temp3[i] = token;
        i++;
        token = strtok(NULL, " ");
    } 

    unsigned int free_space = p_w->max_words - p_w->num_words;
    
    //if the length of the words to add will not fit in the free space available
    //add more free space
    if(wordLength > free_space) {
        //calculate how much space to add
        unsigned int toAdd = wordLength - free_space;
        p_w->max_words += toAdd;
    }
    
    //add the words to the list 
    unsigned int addCounter = 0;
    for (unsigned int j = p_w->num_words; j < p_w->max_words; j++) {
        p_w->list[j] = temp3[addCounter];
        p_w->num_words++;
        addCounter++;
    } 

   return wordLength; 

}

int appendListFromList(Words *dst, const Words *src)
{
    if(dst == NULL || src == NULL) {
        return -1;
    }

    //adding to max words in dst if you need to
    if(dst->max_words < src->num_words) {
        unsigned int toAdd = src->num_words - dst->max_words;
        dst->max_words+= toAdd;
    }    

    //adding to the dst list
    unsigned int toAddTo = dst->num_words;
    char** addingOn = src->list;
    for(unsigned int i = 0; i < src->num_words; i++) {
        dst->list[toAddTo] = addingOn[i];
        toAddTo++;
        dst->num_words++;
    }

    return 0;


}

const char *findWord(const Words *p_w, const char *word)
{
    
    for(unsigned int i = 0; i < p_w->num_words; i++) {
        if(strcmp(p_w->list[i], word) == 0) {
            return p_w->list[i];
        }
    }
    return nullptr;
}

int removeWord(Words *p_w, const char *word)
{
    if(p_w == NULL) {
        return -1;
    }
    
    int removeCounter = 0; 
    for(unsigned int i = 0; i < p_w->num_words; i++) {
        if(strcmp(p_w->list[i], word) == 0) {
            p_w->list[i] = NULL;
            removeCounter++;
        }
    }
    
    //making a new list
    unsigned int newSize = p_w->num_words - removeCounter;
    char** newList = new char*[newSize];
    unsigned int sizeCounter = 0;
    for(unsigned int i = 0; i < p_w->num_words; i++) {
        if(p_w->list[i] != NULL) {
            newList[sizeCounter] = p_w->list[i];
            sizeCounter++;
        }
    }
    
    delete[] p_w->list;
    p_w->num_words = newSize;
    p_w->list = newList;

    return removeCounter;

}
