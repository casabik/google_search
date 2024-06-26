#ifndef TREE_H
#define TREE_H

#include <stdio.h>

#define MAX_CHILDREN 256  
//эта штука нужна для реализации алгортим LZV(что-то типо словаря для поиска айди последовательности(строки) за ассимптотику O(m))

typedef struct TrieNode {
    struct TrieNode *children[MAX_CHILDREN];
    unsigned int isEndOfWord;
} TrieNode;
    

TrieNode *createTrieNode(void);
void insert_string(TrieNode *root, const char *key, int sequenceID);
int search_string(TrieNode *root, const char *key);
void free_trie(TrieNode *root);

#endif
