#ifndef HASH_MAP_H
#define HASH_MAP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_MAP_SIZE 100

typedef struct HashNode {
    char* key;
    void* value;
    struct HashNode* next;
} HashNode;

typedef struct HashMap {
    HashNode* buckets[HASH_MAP_SIZE];
} HashMap;

HashMap* create_hash_map();
unsigned int hash(const char* key);
void hash_insert(HashMap* map, const char* key, void* value);
void* hash_get(HashMap* map, const char* key);
void hash_remove_key(HashMap* map, const char* key);
void free_hash_map(HashMap* map);

#endif
