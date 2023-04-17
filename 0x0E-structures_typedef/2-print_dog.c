#include "dog.h"


void print_dog(struct dog *d)
{
  if (d->age == 0 || d->owner == NULL)
  {
    printf("nil");
    exit(0);
  }
  if (d->name == NULL)
  {
    printf("Name: (nil)");
    exit (0);
  }
  if (d == NULL)
    exit (0);
  printf("Name: %s\n", d->name);
  printf("Age: %f\n", d->age);
  printf("Owner: %s\n", d->owner);
}