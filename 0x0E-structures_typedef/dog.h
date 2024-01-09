#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First
 * @age: Second
 * @owner: Third
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef
 */
typedef struct dog dog_t;

/* lib--*/
#include <stdlib.h>
#include <stdio.h>


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *fn_strcpy(char *dest, char *src);
int fn_strlen(char *s);

#endif
