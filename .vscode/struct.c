#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Person
{
    int age;      // 4
    float height; // 4
    char* name;   // 8
};

typedef struct Person MyPerson;

int main()
{
    struct Person p1 = {18, 1.8, "Tyt"};
    MyPerson p2 = {18, 1.8, "Leo"};
    change_age(p1, 1000);
    printf("p1.age: %d\n", p1.age); // ?
    struct Node n1 = {1, NULL};
    struct Node n2 = {2, NULL};
    struct Node n3 = {3, NULL};
    n1.next = &n2;
    n2.next = &n3;
    return 0;
}