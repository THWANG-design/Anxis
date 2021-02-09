//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int* p;
//	*p = 20;
//
//	return 0;
//
//}
//
//int main(void)
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}
// 研究野指针；
//
//void main()
//{
//	//char c = 'w';
//	//char* pc = &c;
//	char arr[] = "abcedef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc + 1);
//
//}
//int main()
//{
//	char* p = "abcdef"; // const char arr[]        give the address of a 
//	printf("%c\n", *p);	
//	printf("%p\n", p);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = arr1;
//	char* p2 = arr2;
//	if (arr1 == arr2)
//	{
//		printf("yes1\n");
//
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* p[4] = { &a, &b, &c, &d };
//	
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* prr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(prr[i] + j));
//
//		}
//		printf("\n");
//	}
//	return 0;
//}                                 指针数组 一个存放指针的数组

//int main(void)
//{
//	int* p = NULL;   //整形指针
//	char* pc = NULL; //字符指针  指向字符 
//	// 数组指针 ——指向数组的指针  存放数组的地址 
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	// arr
//	// &arr[0]
//	//&arr
//	int(*p)[10] = &arr;

//int main(void)
//{
//	char* arr[5];   // 这是一个数组 - 存放指针的数组 - 存放指向字符型变量指针的数组
//	char(*p)[5] = &arr;
//	 
//}
//void main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d " , (*pa)[i]);
//		printf("%d ", *(*pa + i));
//		//  the whole arrary; *pa == arr
//	}
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//
//	}
//	
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("% d", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//
//}
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//			printf("%d ", *(*(p + i) + j));
//
//		printf("\n");
//
//	}
//
//}
//
//
//int main()
//{
//	int arr[3][5] = { {1, 2, 3, 4, 5} ,{5, 6, 7, 8, 9},{10, 11, 12, 13, 14} };
//	int arr1[4][5] = { {1, 2, 3, 4, 5} ,{5, 6, 7, 8, 9},{10, 11, 12, 13, 14}, {11, 12, 13, 14, 15} };
//
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	print1(arr1, 4, 5);
//	print2(arr1, 4, 5);
//	//arr the name of arrary the address of first value//// sizeof   &arrary means the address of the whole arrary;
//	return 0;
	

//}

//int arr[5];
//int* parr1[10];    // ten value of pointer         arrary;
//int(*parr2)[10];   //  pointer;         to a arrary of ten value;
//int(*parr3[10])[5]; 
//int* pa1[10];       //这是什么意思
// //为什么要这样做；
// //1 .优先级 括号最高 ；  这是一个数组。 
//2 . 数字里面是什么？ 是一个int*类型 也就是指针类型， 所以这是一个存放指针的数组。
// int arr[10]    int* arr[10]  多了一个* 所以存储类型int 转为 int*

//652/。/87/【；4怕【/ 小括号的优先级，最高，
//  这是一个指针， 指向10个元素数组的指针 ， 数组的元素是inttype ，；，。=-3语句f'f'fny't'r
// int （*pa3[10])[5]
// 小括号内呢 是一组指针，
//指针 有10个指针，都是一个数组指针。
//指向一个有五个元素的数组， 这个数组也有10个；
//数组的元素呢 都是int。 
//int arr[10] = { 0 };  //数组
//int* arr2[10] = { 0 };  //  指针数组
//test(arr);
//test2(arr2);

//void test(int arr[])         
//void test(int arr[10])
//void test(int *arr)                    
//void test2(int *arr[20])                  //指针数组 
//void test2(int **arr）                      //二级指针  


//void test(int arr[3][5])
//{}
//void test1(int arr[3][3], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
//void test2(int arr[][5])
//{}
//void test3(int (*arr)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//			printf("%d ", (*arr + i)[j]);
//		printf("\n");
//	}
//
//}



//int main()
//{
//	int arr[3][5] = { 0 };
//	test3(arr, 3, 5);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}

//int main(void)
//{
//	int z;
//	int a = 10;
//	int b = 20;
//	//printf("%d ", Add(a, b));
//	
//	int (*pa)(int, int) = Add;
//	z = (*pa)(7, 8);
//	printf("%d", z);
//}


//(*(void(*)())0)();
//
//void(*signal(int, void(*)(int)))(int);
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t)(int);
//int Add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", (*******pa)(2, 3));// no sense
//	 
//
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//
//}
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//
//}
//
//int main()
//{
//	int* arr[10];
//	int(*pa[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*pa[i])(2, 3));
//	}
//	
//	
//	return 0;
//
//
//
//}



//char* my_strcpy(char* dest, const char* src)
//{
//
//}
//int main()
//{
//	char* (*pa)(char*, const char*) = my_strcpy;
//	char* (*pa[4])(char*, const char*) = {my_strcpy}；
//
//
//}

//void menu()
//{
//	printf("*********************\n");
//	printf("**  1.add    2. sub**\n");
//	printf("**  3.mul    4. div**\n");
//	printf("*********************\n");
//
//}
//int Add(int x, int y)
//{
//	printf("\n");
//
//	return x + y;
//
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void fun_c(int(*prr)(int x, int y))
//{
//	int x = 0;
//	int y = 0;
//	printf("insert two numbers");
//	scanf_s("%d%d", &x, &y);
//	printf("%d", prr(x, y));
//
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*fun[5])(int, int) = { 0,Add, Sub, Mul, Div };
//	
//	do
//	{
//		menu();
//		printf("choose the function : > ");
//		scanf_s("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			printf("insert two numbers : > ");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n ", (*fun[input])(x, y));
//		}
//		else if (input == 0)
//		{
//			printf("Have a nice day");
//			break;
//		}
//		else
//			printf("error");
//	} while (input);
//
//	//do
//	//{
//	//	menu();
//	//	printf("choice");
//	//	scanf_s("%d", &input);
//	//	
//	//	switch (input)
//	//	{
//	//	case 1:
//	//		printf("insert two numbers");
//	//		scanf_s("%d%d", &x, &y);
//	//		printf("%d\n", Add(x, y));
//	//		break;
//	//	case 2:
//	//		printf("insert two numbers");
//	//		scanf_s("%d%d", &x, &y);
//	//		printf("%d\n", Sub(x, y));
//	//		break;
//	//	case 3:
//	//		printf("insert two numbers");
//	//		scanf_s("%d%d", &x, &y);
//	//		printf("%d\n", Mul(x, y));
//	//		break;
//	//	case 4:
//	//		printf("insert two numbers");
//	//		scanf_s("%d%d", &x, &y);
//	//		printf("%d\n", Div(x, y));
//	//		break;
//	//	case 0:
//	//		printf("exit ");
//	//		break;
//	//	default:
//	//		printf("error");
//	//		break;
//
//	//	}
//
//
//	//} 
//	//while (input);
//}
//int main(void)
//{
//	int input;
//	do 
//	{
//		menu();
//		printf("choose the function > - ");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			fun_c(Add);
//			break;
//		case 2:
//			fun_c(Sub);
//			break;
//		case 3:
//			fun_c(Mul);
//			break;
//		case 4:
//			fun_c(Div);
//			break;
//		case 0:
//			printf("exit");
//			break;
//		default:
//			printf("error");
//			break;
//		}
//		
//
//
//	} while (input);
//
//}

// 回调函数；

//void print(char* str)
//{
//	printf(":%s", str);
//}
//void test(void(*p)(char* str))
//{
//	printf("test");
//	p("nIu");
//}

//int arr[10] = { 0 };
//int sz = sizeof(arr) / sizeof(arr[0]);


//int main()
//{
//	test(print);
//	return 0;
//}


//qsort  fun
//int Add(int x, int y)
//{
//	return x + y;
//
//}
//int main()
//{
//	int x, y;
//	int* arr[10];               // the pointer of arrary;
//	int* (*pa)[10] = &arr;      // the arrary of pointer;
//	int(*paa)(int, int) = Add;
//	printf("%d", paa(1, 2));
//	return 0;
//	int(*paa[4])(int, int) = { 0 };
//	int(*(*paaa)[5])(int, int) = &paa;
//}
//float put_num(float arr[], int p)
//{
//	int i = 0;
//	float number;
//	for (i = 0; i < p; i++)
//	{
//		scanf("%f", &number);
//		arr[i] = number;
//
//	}
//}
//int main()
//{
//	int n, i;
//	printf("请输入需要的科目数 > : ");
//	scanf_s("%d", &n);
//	float mark[100];
//	float weight[100];
//	float number3, number4, Average, Total_S = 0;
//	float number1 = 0;
//	float number2 = 0;
//	for(i = 0; i < n; i++)
//	{
//		printf("请输入第 %d 门科目的分数和权重，或输入q退出", i);
//
//		if (scanf_s("%f %f", &number3, &number4) == 2)
//		{
//			mark[i] = number3;
//			weight[i] = number4;
//			number1 += mark[i];
//			number2 += weight[i];
//			Total_S += mark[i] * weight[i];
//		}
//		else
//			break;
//	}
//	
//	printf("你的加权平均分是 ：%f ", Average = Total_S / number2);
//
//
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i, x = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)   // 8, 
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				x = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = x;
//
//
//			}
//		}
//	}
//}

//int main()
//{
//	int arr[10] = { 7, 89, 86, 45, 78, 25, 45, 56, 32, 21};
//	int size;
//	size = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, size);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}

// qsort function  quick sort; 
//void qsort(void *base, size_t num, size_t width, int(*cmp)(const void *e1, const void *e2))
//{
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//float cmp_int2(const void* e1, const void* e2)
//{
	//return *(float*)e1 - *(float*)e2;
//}
//int test2(void)
//{
//	float f[] = { 9.0332, 75.532, 684.12332, 654.215, 45.6232, 41456.344 };
//	qsort(f, sizeof(float) / sizeof(float[1]), sizeof(float[1]), cmp_int2);
//	int i = 0;
//	for (i = 0; i < sizeof(float) / sizeof(float[1]); i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//int main(void)
//{
	//test2();
	//int arr[10] = { 7, 89, 86, 45, 78, 25, 45, 56, 32, 21 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
//}
//#define Msg "helloworld"
//int main(void)
//{
//	char msg[] = Msg;
//	char* pt = Msg;
//	printf("%p\n", Msg);
//	printf("%p\n", msg);
//	printf("%p\n", &msg[0]);
//	printf("%p\n", pt);
//	printf("%p\n", &pt[0]);
//	printf("%c\n", msg[0]);
//	printf("%s\n", msg);

//#define STRLEN  10
//int main(void)
//{
//	char words[STRLEN];
//	
//	puts("input a char");
//	while (fgets(words, STRLEN, stdin) != NULL && words[0] != '\n')	
//		puts(words);
//
//
//
//
//}

//设计一个程序，可以自主输入字符串，并进行排序输入，开始你的表演:
#include<stdio.h>
#include<string.h>
//#define LIM 20
//#define LENTH 60
//void sort(char *arr[], int num);
//char* s_fgets(char* st, int n);
//int main(void)
//{
//	char strings[LIM][LENTH];
//	char* strp[LIM];
//	int ct = 0;
//	printf("input up to %d lines strings, please\n", LIM);
//	while (s_fgets(strings[ct], LENTH) != NULL && strings[ct][0] != '\0' && ct < LIM)
//	{
//		strp[ct] = strings[ct];
//		ct++;
//	}
//	sort(strp, ct);
//	for (int i = 0; i < ct; i++)
//		puts(strp[i]);
//}
//void sort(char* arr[], int num)
//{
//	int i, j;
//	for(i = 0; i < num - 1; i++)
//		for (j = i + 1; j < num; j++)
//		{
//			if (strcmp(arr[i], arr[j]) > 0)
//			{
//				char *temp;
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//}
//char* s_fgets(char* st, int n)
//{
//	char* revl;
//	revl = fgets(st, n, stdin);
//	int i = 0;
//	while (revl[i] != '0' && revl[i] != '\n')
//		i++;
//	if (revl[i] == '\n')
//		revl[i] = '\0';
//	else
//	{
//		while (getchar() != '\n')
//			continue;
//	}
//	return revl;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int rool_n_dice(int dice, int sides);
//int rollem(int sides);
//extern int rollcount = 0;
//int main(void)
//{
//	int dice, roll;
//	int sides;
//
//	srand((unsigned int)time(0));   //随机种子， return seed：
//	printf("Enter the number of sides of per dice, 0 to quit\n");
//	while (scanf_s("%d", &sides) == 1 && sides > 0)
//	{
//		printf("how many dices do you want to have?\n");
//		if (scanf_s("%d", &dice) != 1)
//		{
//			if (scanf_s("%d", &dice) == EOF)
//				break;
//			else
//			{
//				printf("You should enter an integer.\n");
//				printf("Lets do it again.\n");
//				printf("how many sides?\n");
//				continue;
//			}
//
//		}
//		roll = roll_n_dice(dice, sides);
//		printf("You have rolled %d using %d dice of %d sides\n", roll, dice, sides);
//		printf("How many sides do you want to have?\n");
//
//	}
//	printf("You have played %d times, Good luck!\n", rollcount);
//	printf("BYE!");
//
//}
//int roll_n_dice(int dice, int sides)
//{
//	int d;
//	int total = 0;
//	if (sides< 2)
//		printf("You should input at least two sides\n");
//	if (dice< 1)
//		printf("You shoule input at least one dice\n");
//	for (d = 0; d < dice; d++)
//		total += rollem(sides);
//	return total;
//
//}
//int rollem(int sides)
//{
//	extern int rollcount;
//	int roll;
//	roll = rand() % sides + 1;
//	++rollcount;
//	return roll;
//}
#include<stdio.h>
#include<math.h>
#define RAD_TO_AGL (180/(4* atan(1)))

typedef struct polar_V
{
	double magnitute;
	double angle;
}Polar_V;

typedef struct rect_V
{
	double x;
	double y;
}Rect_V;

Polar_V Change_To_Result(Rect_V);
void main()
{
	Polar_V result;
	Rect_V input;
	printf("Input the X and Y value in the anxis.\n ");
	while (scanf_s("%lf %lf", &input.x, &input.y) == 2)
	{
		result = Change_To_Result(input);
		printf("Magnitude = %0.2f, angle = %0.2f \n", result.magnitute, result.angle);
	}
	puts("bye !\n");


}
Polar_V Change_To_Result(Rect_V rv)
{
	Polar_V pv;
	pv.magnitute = sqrt(rv.x * rv.x + rv.y * rv.y);
	pv.angle = atan2(rv.y, rv.x) * RAD_TO_AGL;
	return pv;
}















