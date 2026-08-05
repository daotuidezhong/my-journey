#include<stdio.h>
typedef struct sto {
	char name[10];
	int number;
	unsigned int age;
	char gender[10];
	struct sto* next;
}student;
void print_info(student* p) {
	while (p != NULL) {
		printf("%s %d %d %s\n",p->name,p->number,p->age,p->gender);
		p = p->next;
	}
}
int main() {
	student s1 = { "liu",0622,18,"male",NULL};
	student s2 = { "li",0721,19,"female",NULL};
	student s3 = { "wang",0220,20,"male",NULL };
	s1.next = &s2;
	s2.next = &s3;
	print_info(&s1);

	return 0;
}