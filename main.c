//preprocessor directive
//header files
#include <stdio.h>
//entry point of your program
//prototype for compler
// int sum(int x,int y);//actual parameter
int main()
{
  //builtin function that display the mess
  //printf("hello World\n");
  //Datatypes in c
  //int float double char
  // printf("Size of integer %ld\n",sizeof(int));
  // printf("Size of float %ld\n",sizeof(float));
  // printf("Size of double %ld\n",sizeof(double));
  // printf("Size of character %ld\n",sizeof(char));
    // int num;
    // printf("Enter the number: \n");
    // scanf("%d", &num);
    // printf("The number is %d",num);
    // int num = 5;
    // float f = 2.5;
    // double d = 20.225;
    // char c = 'N';
    // printf("The integer is %d\n",num);
    // printf("The float is %f\n",f);
    // printf("The double is %lf\n",d);
    // printf("The char is %c\n",c);
    //COnstants
    // const double pi = 3.14159;
    // printf("%f \n", pi);
    // Input and Output
    // char c = getchar();
    // printf("Your letter is %c \n",c);

    // int num1,num2;
    // printf("Enter the value: \n");
    // scanf("%d %d", &num1, &num2);
    // printf("Sum of number: %d \n",num1+num2);

   //Operator in c
  //  int num1,num2;
  //  printf("Enter the value: ");
  //  scanf("%d %d", &num1, &num2);
  //  int result = num1 % num2;
  //  printf("Result is %d \n",result);

  //FUnction in c 
  //declaration
  // int x,y,result;
  // x = 2;
  // y = 4;
  // result = sum(x, y);
  // printf("Addition of the number is %d \n",result);
  return 0;
}
//body
// int sum(int x,int y)//formal parameter
// {
//   x = x + y;
//   return x;
// }

//pointer
  //pointer_type *identifier;
  // int j = 63;
  // int *p = NULL;
  // p = &j;
  // printf("The address of j is %x\n", &j);
  // printf("p containing address %x\n", p);
  // printf("the value of j is %d\n", j);
  // printf("p is pointing to the value %d\n", *p);

  //pointer of array
  // int a[5] = {22,33,44,55,66};
  // int *p = NULL;
  // int i;
  // p = a;
  // for(i=0;i<5;i++)
  // {
  //   printf("%d",*(p+i));
  // }

  //String in c 
  // char str[6] = "Nitya"; 
  // char str1[6] = {'N','I','T','\0'};
  //   char name[25];
  //   char city[20];
  //   int age;
  //   printf("Enter your name,city and age: ");
  //   scanf("%s %s,%d",name,city,&age);


// struct student
// {
//   int age;
//   int grade;
//   char name[25];
// };
// int main() 
// {
//   //variable declaration of student structure
//   struct student s1;
//   struct student s2;
//   //assign the value
//   s1.age = 21;
//   s1.grade = 10;
//   s2.age = 22;
//   s2.grade = 9;
//   //assign the string
//   sprintf(s1.name,"Adityanand");
//   sprintf(s2.name,"Nityanand");
//   //printing the values
//   printf("Student name is %s, age is %d and grade is %d \n",s1.name,s1.age,s1.grade);
//   printf("Student name is %s, age is %d and grade is %d \n",s2.name,s2.age,s2.grade);
   // #include <stdlib.h>
// int main()
// {
// 	FILE *pf;
// 	char name[25];
// 	pf = fopen("file","w");
// 	if(pf==NULL)
// 	{
// 		printf("Error!!Occur");
// 		exit(1);
// 	}
// 	printf("Enter the name: ");
// 	scanf("%s",name);
// 	fprintf(pf,"%s\n",name);//for writing
//  fscanf(pf,"%s\n",name);//for reading
// 	// printf("%s\n",name);
// 	fclose(pf);
// 	return 0;
