#include <stdio.h>
struct Car {
  char brand[30];
  char model[30];
  int year;
};

struct Animal {

    char type[30];

};

struct Snake {
    char specieSpecific[30];
    int tagged_len;
    struct Animal animal;

};


int callSpecies(){


    struct Animal animal1 = {"Reptiles"};

    struct Snake snake1 = {"Anaconda",5,animal1};

    printf("Animal Cat : %s\n ",snake1.animal.type);
    printf("Snake specie details : %s %i \n",snake1.specieSpecific,snake1.tagged_len);
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);


  callSpecies();
  return 0;
}