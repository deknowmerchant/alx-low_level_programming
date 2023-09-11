#ifndef DOH_H
#define DOG_H

/**
 * struct dog - Defines a dog structure.
 * @name: The name of the dog (a pointer to char).
 * @age: The age of the dog (a float).
 * @owner: The owner of the dog (a pointer to char).
 *
 * Description: This structure represents information about a dog,
 * including its name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};
