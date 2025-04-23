#include "hashmap.h"

/**
 * The hash function takes a string key and calculates a hash value by iterating through each character
 * and performing bitwise left shift and addition operations.
 * 
 * @param key The `hash` function you provided is a simple hashing function that generates a hash value
 * for a given string `key`. The function iterates over each character in the `key`, left shifts the
 * current hash value by 5 bits, and then adds the ASCII value of the character to the hash value
 * 
 * @return The `hash` function returns the hash value of the input `key` as an unsigned integer. This
 * hash value is calculated by iterating over each character in the `key`, left-shifting the current
 * hash value by 5 bits, and adding the ASCII value of the character to the hash value. Finally, the
 * hash value is taken modulo `HASH_MAP_SIZE` before being returned.
 */
unsigned int hash(const char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash << 5) + *key++;
    }
    return hash % HASH_MAP_SIZE;
}

HashMap* create_hash_map() {
    HashMap* map = (HashMap*)malloc(sizeof(HashMap));
    if (!map) {
        printf("Erro ao alocar memória para o HashMap.\n");
        exit(1);
    }

    for (int i = 0; i < HASH_MAP_SIZE; i++) {
        map->buckets[i] = NULL;
    }

    return map;
}

void hash_insert(HashMap* map, const char* key, void* value) {
    unsigned int index = hash(key);
    HashNode* new_node = (HashNode*)malloc(sizeof(HashNode));
    if (!new_node) {
        printf("Erro ao alocar memória para o nó.\n");
        exit(1);
    }

    new_node->key = strdup(key);
    new_node->value = value;
    new_node->next = map->buckets[index];
    map->buckets[index] = new_node;
}

void* hash_get(HashMap* map, const char* key) {
    unsigned int index = hash(key);
    HashNode* node = map->buckets[index];

    while (node) {
        if (strcmp(node->key, key) == 0) {
            return node->value;
        }
        node = node->next;
    }

    return NULL;
}

void hash_remove_key(HashMap* map, const char* key) {
    unsigned int index = hash(key);
    HashNode* node = map->buckets[index];
    HashNode* prev = NULL;

    while (node) {
        if (strcmp(node->key, key) == 0) {
            if (prev) {
                prev->next = node->next;
            } else {
                map->buckets[index] = node->next;
            }
            free(node->key);
            free(node);
            return;
        }
        prev = node;
        node = node->next;
    }
}

void free_hash_map(HashMap* map) {
    for (int i = 0; i < HASH_MAP_SIZE; i++) {
        HashNode* node = map->buckets[i];
        while (node) {
            HashNode* temp = node;
            node = node->next;
            free(temp->key);
            free(temp);
        }
    }
    free(map);
}
