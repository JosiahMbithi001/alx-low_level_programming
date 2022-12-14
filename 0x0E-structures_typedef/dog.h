#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>

/**
 * dog - A Structure for A Dog 
 * @name - The Name of the dog
 * @Age -Dog's Age
 * @owner - Dog's Owner
 * Description - A Simple basic struct for A dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* _DOG_H_ */
