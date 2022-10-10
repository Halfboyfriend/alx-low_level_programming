#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Owoyemi Idris
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
/**
 * my_dog - Typedef for struct dog
 */
typedef struct dog my_dog
struct dog
{
	char *name;
	float age;
	char *owner;
}

 
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
	
#endif
