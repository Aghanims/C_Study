//String array
    char cars[][10] = {"Toyota", "Mustang", "Tesla", "Corvette", "Lamborghini"};
    int theSize = sizeof(cars) / sizeof(cars[0]);

    //to change/assign element to an index use "strcpy()"
    strcpy(cars[0], "Rolce Royce");

    for(int i = 0; i < theSize; i++)
        printf("\n%d. %s", i+1, cars[i]);