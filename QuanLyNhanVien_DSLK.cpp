#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
    char name[100];
    int age;
    struct employee *next;
} Employee;

Employee *head = NULL;

Employee *insert(char *name, int age) {
    Employee *new_employee = (Employee*)malloc(sizeof(Employee));
    strcpy(new_employee->name, name);
    new_employee->age = age;
    new_employee->next = head;
    head = new_employee;
    return new_employee;
}

//void InDs()
int main() {
    char name[100];
    int age;
    Employee *p;
    while (1) {
        printf("Nhap ten : ");
        fgets(name, 100, stdin);
        name[strcspn(name, "\n")] = 0;
        if (strlen(name) == 0) break;
        printf("nhap tuoi: ");
        scanf("%d", &age);
        getchar();
        p = insert(name, age);
//        head = p;
    }
    int i = 0;
    while(head != NULL)
    {
    	i ++;
    	cout << "Danh sach da nhap la: "<< endl;
    	cout << head -> name << "|" << head -> age << endl;
    	head = head -> next;
	}
    return 0;
}

