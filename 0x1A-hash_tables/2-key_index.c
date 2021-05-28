#include "hash_tables.h"
/**
  * key_index - gives the index of a key
  * @key: the key of the of the hash
  * @size: the size of the array
  * Return: the index at which the key/value pair is stored in
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_num, index;

	hashed_num = hash_djb2(key);
	index = hashed_num % size;
	return (index);
}
