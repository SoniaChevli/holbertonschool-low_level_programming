#ifndef DOG_H
#define DOG_H
/**
 * struct dog - characteristics of the dog
 *
 *@name: name of dog
 *@age: age of dog
 *@owner: who owns the dpg
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
