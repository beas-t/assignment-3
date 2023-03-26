1)
#include<stdio.h>
int main(){
    int arr[]={6,12,18,24};
    int x=0;
    x=arr[1]+(arr[1]=2);
    printf("%d",x);
    return 0;
}

//Output : 14

2)
#include<stdio.h>

void main(){
    int i=3,val;
    val=sizeof f(i)+ +f(i=1)+ +f(i-1);
    printf("%d %d",val,i);
}
int f(int num){
    return num*5;
}

//Output : 9 1

3)
#include<stdio.h>

float avg(float,float,float);
void main(){
    float p=1,q=2,r=-2,a;
    a=avg(p,(q=4,r=-12,q),r);
    printf("%f",a);  
}
float avg(float x,float y,float z){
    return (x+y+z)/3;
}
// Output : -2.333333

4)
void main()
{
int const * p=5;
printf("%d",++(*p));
}

//Output : p is a constant so it creates an error.

5)
main()
{
int c[ ]={2.8,3.4,4,6.7,5};
int j,*p=c,*q=c;
for(j=0;j<5;j++) {
printf(" %d ",*c);
++q; }
for(j=0;j<5;j++){
printf(" %d ",*p);
++p; }
}
// Output : 2  2  2  2  2  2  3  4  6  5 

6)
main()
{
char string[]="Hello World";
display(string);
}
void display(char *string)
{
printf("%s",string);
}
// Output : Hello World

7)
  #include <stdio.h>

void main(){
	int n,i,j,k;
	printf("Enter n:");
	scanf("%d",&n);
	for (i = 1; i <= n; i++){
		for (k = 0; k <n-i;k++){
				printf(" ");
			}
		for (j = 1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

//Input : Enter n : 5
//Output : 
    1
   12
  123
 1234
12345

8)
#include <stdio.h>

void main(){	
	int i, first = -1;
    int arr[] = { 1, 2, 3, 6, 2 };
    int n = sizeof(arr) / sizeof(int);
    int x = 6;
    for (i = 0; i < n; i++) {
        if (x != arr[i]){
            continue;
    	}
        if (x == arr[i]){
        	first = i;
        	break;
    	}	
    }
    printf("%d",first);
}

//Output : 3

9)
#include "string.h"
typedef struct stu1{
    char name1[6];
    char name2[6];
    double marks;
}STU1;
void main(){
    STU1 s1={"rohit","kumar",87.43},*p1;
    char *p;
    p1=&s1;
    p=memchr(p1,'u',sizeof(STU1));
    printf("%s",p);  
}

//Output : umar

10)
#define square(x) x*x
main()
{
int i;
i = 64/square(4);
printf("%d",i);
}


//Output : 64
              
				
				
				
				
				
				
				
				
				
1) #include <stdio.h>

    int main() {
    int n1, n2, n3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    max = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);

    printf("The maximum between %d, %d and %d is: %d", n1, n2, n3, max);

    return 0;
}

				
2) #include <stdio.h>

    int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? printf("%c is an alphabet.", c) : printf("%c is not an alphabet.", c);

    return 0;
}

3) #include <stdio.h>

   int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }

    printf("The sum of all odd numbers from 1 to %d is %d.", n, sum);

    return 0;
}

				
4) #include <stdio.h>
   #include <string.h>

   #define ASCII_SIZE 256

   int main() {
    char str[100];
    int freq[ASCII_SIZE] = {0};
    int max_freq = -1;
    char max_char;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        freq[str[i]]++;
    }

    for (int i = 0; i < strlen(str); i++) {
        if (freq[str[i]] > max_freq) {
            max_freq = freq[str[i]];
            max_char = str[i];
        }
    }

    printf("The maximum occurring character in the string is '%c' with frequency %d.", max_char, max_freq);

    return 0;
}

				
5) The Output is:
   201020

6) The Output is:
   1011

7) #include <stdio.h>

   int main() {
    int a = 1;

    while (a <= 100) {
        printf("%d", a * a);
        a++;
    }

    return 0;
}

8) The Output is: 
   1200, 1200, 1200

9) The Output is:
   error, as braces are missing around the initializers in line 5, 'amp' is undeclared, and a variable ptr is set but not used.

10) #include <stdio.h>
    #include <string.h>

    void sort_names(char names[][50], int n, int ascending) {
    char temp[50];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((ascending && strcmp(names[i], names[j]) > 0) || (!ascending && strcmp(names[i], names[j]) < 0)) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[10][50];
    int n;

    printf("Enter the number of names (up to 10): ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    int choice;
    printf("Enter 1 to sort names in ascending order, 0 for descending order: ");
    scanf("%d", &choice);

    sort_names(names, n, choice);

    printf("The sorted names are:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}				
				
1) #include <stdio.h>

struct person {
    char name[50];
    int age;
};

int main() {
    struct person p1 = {"Varun", 18};
    struct person *x = &p1;

    printf("Name: %s\n", x->name);
    printf("Age: %d\n", x->age);

    return 0;
}

2) The output is:
Error

3)  The output is:
Error

4)  The output is:
-126

5)  The output is:
hello world

6) #include <stdio.h>

struct employee {
    int emp_no;
    char name[50];
    float salary;
};

int main() {
    int n, i, max_index;
    float max_salary = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];

    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].emp_no);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

    printf("\nDetails of employee with highest salary:\n");
    printf("Employee number: %d\n", employees[max_index].emp_no);
    printf("Name: %s\n", employees[max_index].name);
    printf("Salary: %.2f\n", employees[max_index].salary);
}

7) #include <stdio.h>

struct person {
    char name[50];
    int age;
};

int main() {
    struct person p1 = {"Varun", 18};
    struct person *x = &p1;

    printf("Name: %s\n", x->name);
    printf("Age: %d\n", x->age);

    return 0;
}

8) #include <stdio.h>

struct student {
    int student_number;
    int grade;
};

int main() {
    int n, i, a_count = 0, b_count = 0, c_count = 0, d_count = 0, f_count = 0;
    struct student s;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the student number and grade for student %d: ", i+1);
        scanf("%d %d", &s.student_number, &s.grade);

        if (s.grade >= 90) {
            a_count++;
        } else if (s.grade >= 78) {
            b_count++;
        } else if (s.grade >= 65) {
            c_count++;
        } else if (s.grade >= 50) {
            d_count++;
        } else {
            f_count++;
        }

        printf("Student %d: Number %d, Grade %d\n", i+1, s.student_number, s.grade);
    }

    printf("Total number of As: %d\n", a_count);
    printf("Total number of Bs: %d\n", b_count);
    printf("Total number of Cs: %d\n", c_count);
    printf("Total number of Ds: %d\n", d_count);
    printf("Total number of Fs: %d\n", f_count);

    return 0;
}

9) #include <stdio.h>

int findHCF(int num1, int num2);

int main() {
    int num1, num2, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    hcf = findHCF(num1, num2);

    printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}

int findHCF(int num1, int num2) {
    int i, hcf;

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    return hcf;
}

10) #include<stdio.h>
#include<ctype.h>

int main()

{
    char a,b;
    printf("enter a lowercase letter: ");
    scanf("%c",&a);
    b = toupper(a);
    printf("\nThe character you entered is %c",b);
}				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				  





























