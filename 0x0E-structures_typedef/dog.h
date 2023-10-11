#ifndef DOG
#define DOG

/**
  * struct dog - Dog object class
  * @name: Dog Name
  * @age: Dog Age
  * @owner: You Idiot
*/

struct dog {
  char *name;
  float age;
  char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif



// #ifndef DOG
// #define DOG

// #include <stdio.h>
// #include <stdlib.h>

// /**
//  * struct dog - Program for dog class
//  *
//  * @name: Name of the dog
//  *
//  * @age: Age of the dog
//  *
//  * @owner: Owner of the dog
//  */

// struct dog
// {
// 	char *name;
// 	float age;
// 	char *owner;
// };

// void init_dog(struct dog *d, char *name, float age, char *owner);
// void print_dog(struct dog *d);

// typedef struct dog dog_t;

// dog_t *new_dog(char *name, float age, char *owner);

// void free_dog(dog_t *d);

// #endif
