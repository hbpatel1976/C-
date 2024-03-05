#include <stdio.h>
struct student
{
	int rollno, maths, english, hindi;
	void show() {printf("This is a show function in structure student\n");}
};
int main()
{
	struct student himanshu, monu;
	printf("Enter rollno, Maths marks, English marks & Hindi marks for Himanshu : ");
	scanf("%d %d %d %d", &himanshu.rollno, &himanshu.maths, &himanshu.english, &himanshu.hindi);
	
	printf("Enter rollno, Maths marks, English marks & Hindi marks for Monu : ");
	scanf("%d %d %d %d", &monu.rollno, &monu.maths, &monu.english, &monu.hindi);
	
	printf("Himanshu Total = %d\n", himanshu.maths + himanshu.english + himanshu.hindi);
	printf("Monu Total = %d\n", monu.maths + monu.english + monu.hindi);
}
