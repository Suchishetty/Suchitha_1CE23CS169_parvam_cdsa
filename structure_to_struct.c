#include<stdio.h>
struct Address
{
    char street[20];
    char city[20];
    char state[20];
};
struct Person
{
    int age;
    char name[20];
    struct Address address;
};
int main()
{
    struct Person person;
    printf("enter the name:");
    scanf("%s",person.name);
    printf("enter the age:");
    scanf("%d",person.age);
    printf("enter the street:");
    scanf("%s",person.address.street);
    printf("enter the city:");
    scanf("%s",person.address.city);
    printf("enter the state:");
    scanf("%s",person.address.state);
    printf("\nname:%s\n",person.name);
    printf("age:%s\n",person.age);
    printf("street:%s\n",person.address.street);
    printf("city:%s\n",person.address.city);
    printf("state:%s\n",person.address.state);
    return 0;
}