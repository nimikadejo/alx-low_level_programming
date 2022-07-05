#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct for dog descriptions
 * @name: dog name
 * @age: the age
 * @owner: caregiver
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog;
#endif
