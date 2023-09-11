#ifndef DOG_H_INCLUDED
#define DOG_H_INCLUDED

/**
 *struct dog - dog data
 *@name : name of dog
 *@age : age of dog
 *@owner : owner of dog
 *Description: Defines metadata about the dog and type of dog's struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;
#endif
