#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New type struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Define a new type struct 'dog'
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
