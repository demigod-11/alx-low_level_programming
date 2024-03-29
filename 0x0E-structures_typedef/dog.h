#ifndef DOG
#define DOG

/**
 * struct dog - Dog struct
 * @name: name.
 * @age: age.
 * @owner: owner.
 *
 * Description: attributes.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
