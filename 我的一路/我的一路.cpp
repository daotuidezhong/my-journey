#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<string.h>
//#include<stdio.h>
//int main() {
//
//
//
//    return 0;
//}
//数字交换用swap(int *a,int *b)
//字符串交换用swap_str(char *str1,char *str2)和strcpy
/*打印菱形*/
//int main() {
//	int line = 0;
//	scanf_s("%d", &line);
////上
//	for (int i = 0; i < line; i++) {
//		for (int j = 0; j < line - 1 - i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (i)-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//
//
//
////下
//	for (int i = 0; i < line-1; i++) {
//		for (int j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * (line-1-i)-1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/*冒泡排序*/
//void swap(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//int main() {
//	const int n = 10;
//	int a[n], i, j;
//	for (i = 0; i < n; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	printf("\n");
//	for (j = 0; j < n - 1; j++) {
//		for (i = 0; i < n - 1 - j; i++) {
//			if (a[i] < a[i + 1]) {
//				swap(&a[i], &a[i + 1]);
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//
//
//
//
//	return 0;
//}



/*选择排序*/
//void swap(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//int main() {
//	const int n = 10;
//	int a[n],i, j;
//	for (i = 0; i < n; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0; i < n - 1; i++) {
//		for (j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				swap(&a[i], &a[j]);
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//
//
//
//	return 0;
//}


/*统计学生数据*/
//struct all {
//	int num;
//	char name[20];
//	int grade1;
//	int grade2;
//	int grade3;
//	int sum;
//};
//void swap(struct all* a, struct all* b) {
//	struct all temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	struct all stu[10];
//	float aver[3] = {0};
//	for (int i = 0; i < 10; i++) {
//		scanf_s("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].grade1, &stu[i].grade2, &stu[i].grade3);
//		stu[i].sum = (stu[i].grade1 + stu[i].grade2 + stu[i].grade3);
//	}
//	for (int j = 0; j < 10; j++) {
//		aver[0] += stu[j].grade1;  
//		aver[1] += stu[j].grade2;  
//		aver[2] += stu[j].grade3;  
//	}
//	
//	aver[0] /= 10.0;
//	aver[1] /= 10.0;
//	aver[2] /= 10.0;
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9 - i; j++) {
//			if (stu[j].sum < stu[j + 1].sum) {
//				swap(&stu[j], &stu[j + 1]);
//			}
//		}
//	}
//	float max = stu[0].sum / 3.0;
//	
//	printf("%.2f %.2f %.2f", aver[0],aver[1],aver[2]);
//	
//	printf("%d %s %.2f %.2f %.2f %.2f\n", stu[0].num, stu[0].name, stu[0].grade1, stu[0].grade2, stu[0].grade3, max);
//
//
//
//	return 0;
//}



/*合并两个数组并且排序*/
//void merge(int a[], int b[], int c[], int n, int m) {
//	int i = 0, j = 0, k = 0;
//	while (i < n && j < m) {
//		if (a[i] >= b[j])
//			c[k++] = a[i++];
//
//		else
//			c[k++] = b[j++];
//	}
//	while (i < n) {
//		c[k++] = a[i++];
//	}
//	while (j < m) {
//		c[k++] = b[j++];
//	}
//}
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//void sort(int x[], int k) {
//	for (int i = 0; i < k - 1; i++) {
//		for (int j = 0; j < k - 1 - i; j++) {
//			if (x[j] < x[j + 1]) {
//				swap(&x[j], &x[j + 1]);
//			}
//		}
//	}
//
//}
//int main() {
//	int n = 5, m = 4;
//	int a[5] = { 98,64,75,91,55 };
//	int b[4] = { 90,58,84,61 };
//	int c[9];
//	sort(a, n);
//	sort(b, m);
//	merge(a, b, c, n, m);
//	int j;
//	for (j = 0; j < 9; j++) {
//		printf("%5d", c[j]);
//	}
//
//
//
//
//	return 0;
//}


/*最小公倍数*/
//int main() {
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int num=1;
//	while (a *num%b) {
//		num++;
//	}
//	printf("%d", num*a);
//
//
//
//
//
//	return 0;
//}dddd

/*反转字符串*/
//void reverse(char* left, char* right) {
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char input;
//    int i = 0;
//    char arr[101] = { 0 };
//
//
//    while ((input = getchar()) != EOF && input != '\n' && i < 100) {  //getchar使用方法
//        arr[i++] = input;
//    }
//    arr[i] = '\0';      //确保字符串以空字符结尾
//
//    int len = strlen(arr);
//
//
//    reverse(arr, arr + len - 1);
//
//
//    char* start = arr;
//    while (*start) {
//        // 跳过空格
//        while (*start == ' ') {
//            start++;
//        }
//
//
//
//        char* end = start;
//        while (*end != ' ' && *end != '\0') {
//            end++;
//        }
//
//
//        reverse(start, end - 1);
//
//
//        start = end;
//    }
//
//
//    printf("%s\n", arr);
//    return 0;
//}



/*买铅笔问题*/
//#include<stdio.h>
//int main() {
//    int sum;
//    int num[3][2] = { 0 };
//    scanf("%d", &sum);
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 2; j++) {
//            scanf("%d", &num[i][j]);
//        }
//    }
//    
//    int shu[3] = { 0 };
//    for (int j = 0; j < 3; j++) {
//        int i = 1;//记得初始化
//        while (num[j][0] * i < sum) {
//            i++;
//
//        }
//        shu[j] = i;
//    }
//    int price[3] = { 0 };
//    for (int i = 0; i < 3; i++) {
//        price[i] = shu[i] * num[i][1];
//    }
//    int miniprice = price[0];
//    for (int i = 0; i < 3; i++) {
//
//        if (price[i] < miniprice) {
//            miniprice = price[i];
//        }
//    }
//    printf("%d", miniprice);
//
//
//
//
//
//
//    return 0;
//}


/*判断三角形问题*/
//#include<stdio.h>
//#include<math.h>
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void change(int a[3]) {
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2 - i; j++) {
//            if (a[j] > a[j + 1]) {
//                swap(&a[j], &a[j + 1]);
//            }
//        }
//    }
//}
//int main() {
//    int bianchang[3] = { 0 };
//    for (int i = 0; i < 3; i++) {
//        scanf("%d", &bianchang[i]);
//    }
//    change(bianchang);
//    if (bianchang[0] + bianchang[1] <= bianchang[2]) {
//        printf("Not triangle\n");
//        return 0;
//    }
//
//    if (((bianchang[0] * bianchang[0]) + (bianchang[1] * bianchang[1])) == (bianchang[2] * bianchang[2])) {
//    printf("Right triangle\n");
//}
//    else if ((bianchang[0] + bianchang[1]) * (bianchang[0] + bianchang[1]) > (bianchang[2] * bianchang[2])) {
//    printf("Acute triangle\n");
//}
//    else if ((bianchang[0] + bianchang[1]) * (bianchang[0] + bianchang[1]) < (bianchang[2] * bianchang[2])) {
//    printf("Obtuse triangle\n");
//}
//    else if ((bianchang[0] == bianchang[1]) && (bianchang[1] != bianchang[2])) {
//    printf("Isosceles triangle\n");
//}
//    else if (bianchang[0] == bianchang[1] && bianchang[1] == bianchang[2]) {
//    printf("Equilateral triangle\n");
//}
//
//
//
//return 0;
//}



/*三角函数*/
//#include<stdio.h>
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void change(int a[3]) {
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2 - i; j++) {
//            if (a[j] > a[j + 1]) {
//                swap(&a[j], &a[j + 1]);
//            }
//        }
//    }
//}
//int main() {
//    int num[3];
//    for (int i = 0; i < 3; i++) {
//        scanf("%d", &num[i]);
//    }
//    change(num);
//    for (int i = 0; i < 3; i++) {
//        printf("%d ", num[i]);
//    }
//    printf("%d/%d", num[0], num[2]);
//
//
//
//
//
//    return 0;
//}


/*摘苹果*/
//#include<stdio.h>
//int main() {
//    int height[10] = { 0 };
//    int handheight = 0;
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &height[i]);
//    }
//    scanf("%d", &handheight);
//    int cnt = 0;
//    for (int i = 0; i < 10; i++) {
//        if (height[i] > handheight) {
//            height[i] -= 30;
//            if (height[i ]<= handheight) {
//                cnt++;
//            }
//        }
//        else {
//            cnt++;
//
//        }
//    }
//    printf("%d", cnt);
//
//
//
//    return 0;
//}




/*输入ABC进行排序*/
//#include<stdio.h>
//#include<string.h>  
//
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void change(int a[3]) {
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2 - i; j++) {
//            if (a[j] > a[j + 1]) {
//                swap(&a[j], &a[j + 1]);
//            }
//        }
//    }
//}
//
//void change1(int a[3]) {
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2 - i; j++) {
//            if (a[j] < a[j + 1]) {
//                swap(&a[j], &a[j + 1]);
//            }
//        }
//    }
//}
//
//int main() {
//    int num[3] = { 0 };
//    for (int i = 0; i < 3; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    char alpha[4];//字符输入要用字符数组
//    scanf("%s", alpha);
//
//
//    if (strcmp(alpha, "ABC") == 0) { //利用strcmp进行字符串比较
//        change(num);
//        for (int i = 0; i < 3; i++) {
//            printf("%d ", num[i]);
//        }
//    }
//    else if (strcmp(alpha, "ACB") == 0) {
//        change(num);
//        swap(&num[1], &num[2]);
//        for (int i = 0; i < 3; i++) {
//            printf("%d ", num[i]);
//        }
//    }
//    else if (strcmp(alpha, "BAC") == 0) {
//        change(num);
//        swap(&num[0], &num[1]);
//        for (int i = 0; i < 3; i++) {
//            printf("%d ", num[i]);
//        }
//    }
//    else if (strcmp(alpha, "BCA") == 0) {
//        change(num);
//        swap(&num[0], &num[1]);
//        swap(&num[1], &num[2]);
//        for (int i = 0; i < 3; i++) {
//            printf("%d ", num[i]);
//        }
//    }
//    else if (strcmp(alpha, "CAB") == 0) {
//        change(num);
//        swap(&num[0], &num[1]);
//        swap(&num[0], &num[2]);
//        for (int i = 0; i < 3; i++) {
//            printf("%d ", num[i]);
//        }
//    }
//    else if (strcmp(alpha, "CBA") == 0) {
//        change1(num);
//        for (int i = 0; i < 3; i++) {
//            printf("%d ", num[i]);
//        }
//    }
//
//    return 0;
//}


/* ISBN 号码*/
//#include<stdio.h>
//int main() {
//    char code[14];
//    int num[11] = { 0 };
//    scanf("%s", code);
//    int cnt = 0;
//    for (int i = 0; i < 14; i++) {
//        if (code[i] != '-') {
//            num[cnt] = code[i] - '0';
//            cnt++;
//        }
//    }
//    int result = 0;
//    for (int i = 1; i < 10; i++) {
//        result += num[i - 1] * i;
//    }
//    result %= 11;
//    if (result == 10 && code[12] == 'X') {//错误点：判断原来就等于X的情况
//        printf("Right");
//    }
//    else if (result == code[12] - '0') {
//        printf("Right");
//
//    }
//    else {
//        code[12] = result + '0';
//        printf("%s", code);
//    }
//
//
//    return 0;
//}


//循环

/*找最小值*/
//#include<stdio.h>
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void change(int a[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1 - i; j++) {
//            if (a[j] < a[j + 1]) {
//                swap(&a[j], &a[j + 1]);
//            }
//        }
//    }
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    change(arr, n);
//    printf("%d", arr[n - 1]);
//
//
//    return 0;
//}


/*求能被k整除的数字的平均数*/
//#include<stdio.h>
//int main() {
//    int n = 0, k = 0;
//    int count1 = 0, count2 = 0;
//    double cnt1 = 0.0, cnt2 = 0.0;
//    scanf("%d %d", &n, &k);
//    for (int i = 1; i <= n; i++) {  //要从1开始算，要不然会拉低平均值
//        if (i % k == 0) {
//            cnt1 += i;
//            count1++;
//        }
//        else {
//            cnt2 += i;
//            count2++;
//        }
//    }
//    cnt1 /= count1;
//    cnt2 /= count2;
//    printf("%.1f %.1f", cnt1, cnt2);
//
//
//    return 0;
//}

/*递归*/
//int trans(int a) {
//    int cnt = 1;
//    while (a != 1) {
//        a = a / 2;
//        cnt++;
//        trans(a);
//    }
//    return cnt;
//}
//int main() {
//    int a = 0, cnt = 0;
//    scanf("%d", &a);
//    cnt = trans(a);
//    printf("%d",cnt);
//
//    return 0;
//}

/*高精度求和*/
//#include<stdio.h>
//#include<string.h>
//int max(int a, int b) {
//    if (a > b)
//    {
//        return a;
//    }
//    else
//    {
//        return b;
//    }
//}
//char s1[505], s2[505];
//// 逆序存储数字：a[1]是个位，a[2]是十位，以此类推
//int a[505] = { 0 }, b[505] = { 0 }, c[505] = { 0 };
//
//int main() {
//    int la, lb, lc, carry = 0; // carry：进位，初始化为0
//
//    // 输入两个字符串形式的大数
//    scanf("%s", s1);
//    scanf("%s", s2);
//    la = strlen(s1);
//    lb = strlen(s2);
//
//    // 字符串逆序转换为数字数组（a[1]=个位，a[2]=十位...）没有a[0]!!
//    for (int i = 0; i < la; i++) {
//        a[la - i] = s1[i] - '0';
//    }
//    for (int i = 0; i < lb; i++) {
//        b[lb - i] = s2[i] - '0';
//    }
//
//    // 确定最大长度，遍历逐位相加（处理进位）
//    lc = max(la, lb);
//    for (int i = 1; i <= lc; i++) {//此处也是从a[1]开始计算,注意临界<=
//        // 当前位 = a[i] + b[i] + 上一位的进位
//        c[i] = a[i] + b[i] + carry;
//        carry = c[i] / 10; // 计算新的进位（0或1）
//        c[i] = c[i] % 10;  // 保留当前位的个位
//    }
//
//    // 最后若有进位，长度+1，进位存入最高位
//    if (carry > 0) {
//        lc++;
//        c[lc] = carry;
//    }
//
//    // 跳过前导零（如果结果全为0，保留一个0）
//    while (lc > 1 && c[lc] == 0) {
//        lc--;
//    }
//
//    // 逆序输出结果（从最高位到个位）
//    for (int i = lc; i >= 1; i--) {
//        printf("%d", c[i]);
//    }
//    printf("\n");
//
//    return 0;
//}


/*高精度减法*/
//#include<stdio.h>
//#include<string.h>
//char s1[10090], s2[10090];
//int a[10090] = { 0 }, b[10090] = { 0 }, c[10090] = { 0 };
//int judge = 0;
//void swap_str(char* str1, char* str2) {//这里是字符串交换
//	char temp[10090];
//	strcpy(temp, str1);
//	strcpy(str1, str2);
//	strcpy(str2, temp);
//}
//int str_cmp(char* s1, char* s2) {
//	int la = strlen(s1), lb = strlen(s2);
//	if (la != lb) {
//		return la > lb ? 1 : -1;
//	}
//	return strcmp(s1, s2);
//}
//int max(int a, int b) {
//	if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//int main() {
//	scanf("%s", s1);
//	scanf("%s", s2);
//	int la=0, lb=0,lc=0;
//	la = strlen(s1);
//	lb = strlen(s2);
//	int cmp = str_cmp(s1, s2);
//	if (cmp < 0) {
//		swap_str(s1, s2);
//		judge = 1;
//		int temp = la;
//		la = lb;
//		lb = temp;
//	}
//	else if (cmp == 0) {
//		printf("0\n");
//		return 0;
//	}
//	for (int i = 0; i < la; i++) {
//		a[la - i] = s1[i] - '0';
//	}
//	for (int i = 0; i < lb; i++) {
//		b[lb - i] = s2[i] - '0';
//	}
//	lc = max(la, lb);
//	for (int i = 1; i <= lc; i++) {//从i=1开始
//		if (a[i] < b[i]) {
//			a[i+1]--;//a[i+1]而不是a[i++]
//			a[i] = a[i] + 10;
//		}
//		c[i] = a[i] - b[i];
//	}
//	while (c[lc] == 0 && lc > 1) {//大于1要保留最后一位0
//		lc--;
//	}
//	if (judge) {
//		printf("-");
//	}
//	for (int i = lc; i >0; i--) {
//		printf("%d", c[i]);
//	}
//	
//
//
//	return 0;
//}

/*高精度乘法*/
//#include<stdio.h>
//#include<string.h>
//char s1[2005], s2[2005];
//int a[2005] = { 0 }, b[2005] = { 0 }, c[2005] = {0};
//int main() {
//	int la = 0, lb = 0, lc = 0;
//	scanf("%s", s1);
//	scanf("%s", s2);
//	la = strlen(s1);
//	lb = strlen(s2);
//	for (int i = 0; i < la; i++) {
//		a[la - i] = s1[i] - '0';
//	}
//	
//	for (int i = 0; i < lb; i++) {
//		b[lb - i] = s2[i] - '0';
//	}
//	lc = la + lb;
//	for (int i = 0; i < la; i++) {
//		for (int j = 0; j < lb; j++) {
//			c[i + j - 1] += a[i] * b[j];
//			c[i + j] += c[i + j - 1] / 10;
//			c[i + j - 1] %= 10;
//		}
//	}
//	while (c[lc] == 0 && lc > 1) {
//		lc--;
//	}
//	for (int i = lc; i > 0; i--) {
//		printf("%d", c[i]);
//	}
//	
//
//
//
//
//
//
//	return 0;
//}

/*高精度阶乘求和*/
//#include<stdio.h>
//int a[101] = { 0 }, b[101] = { 0 };
//void change(int x) {
//	int carry = 0;
//	for (int i = 100; i >= 0; i--) {
//		a[i] = a[i] * x + carry;
//		carry = a[i] / 10;
//		a[i] %= 10;
//	}
//}
//void add() {
//	int carry = 0;
//	for (int i = 100; i >= 0; i--) {
//		b[i] = b[i] + a[i] + carry;
//		carry = b[i] / 10;
//		b[i] %= 10;
//	}
//}
//void clear0andprint() {
//	int w;
//	for (int i = 0; i <= 100; i++) {//要包含100
//		if (b[i] != 0) {
//			w = i;
//			break;
//		}
//	}
//	for (int i = w; i <= 100; i++) {//要包含100
//		printf("%d", b[i]);
//	}
//}
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	a[100] = b[100] = 1;
//	for (int i = 2; i <=x ; i++) {//要包含x
//		change(i);//计算每个i的阶乘
//		add();
//	}
//	clear0andprint();
//
//
//
//	return 0;
//}


/*猜数字游戏*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game() {
//	int r = rand()%100+1;
//	int count = 5;
//	int a;
//	while (count) {
//		printf("你现在还有%d此机会\n", count);
//		printf("请输入你猜的数字");
//		scanf("%d", &a);
//		if (a == r) {
//			printf("恭喜你，猜对了");
//			break;
//		}
//		else if (a > r) {
//			printf("猜大了");
//			count--;
//		}
//		else if (a < r) {
//			printf("猜小了");
//			count--;
//		}
//	}
//	if (count == 0) {
//		printf("机会用完，你没有猜对");
//	}
//}
//int main() {
//	srand((unsigned int)time(NULL));
//	int input=0;
//	printf("请输入数字1或2来开始或结束游戏\n");
//	
//	do {
//		printf("******************\n");
//		printf("******play 1******\n");
//		printf("******exit 0******\n");
//		printf("******************\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误，请重新输入");
//			break;
//		}
//	} while (input);
//
//		
//
//		
//	
//
//	return 0;
//}



/*计数问题*/
//#include<stdio.h>
//int main() {
//    int x = 0, cnt = 0, n = 0;
//
//    int temp = 0;
//    scanf("%d %d", &n, &x);
//    for (int i = 0; i <= n; i++) {//要等于n否则会少数字
//        temp = i;
//        while (temp > 0) {
//            int b = temp % 10;
//            if (b == x) {
//                cnt++;
//            }
//            temp /= 10;
//        }
//    
//
//
//    }
//    printf("%d", cnt);
//    return 0;
//}


/*金币问题*/
//#include<stdio.h>
//int main() {
//    int k = 0;
//    scanf("%d", &k);
//    int sum = 0, day = 0, cnt = 1;
//    while (day + cnt < k) {
//        sum += (cnt * cnt);
//        day += cnt;
//        cnt++;
//    }
//    int remain = k - day;
//    sum =sum+ (cnt * remain);
//    printf("%d",sum );
//
//
//    return 0;
//}

//第一天吃 1 个苹果，之后 2 天每天吃 2 个，之后 3 天每天吃 3 个……”几天吃完




/*质数口袋*/
//#include<stdio.h>
//int is_prime(int a) {
//    int isprime = 1;
//    for (int i = 2; i < a; i++) {//i=2保证isprime不能一直是零
//        if (a % i == 0) {//只要有一个数能被整除就不是素数
//            isprime = 0;
//        }
//    }
//    return isprime;
//}
//int main() {
//    int l = 0, i = 2, cnt = 0, sum = 0;
//    scanf("%d", &l);
//    while (sum <= l) {
//        int isprime = 0;
//        isprime=is_prime(i);//返回值要用变量接受
//        
//        if (isprime) {
//            cnt++;
//            sum += i;
//            if (sum <= l) {
//                printf("%d\n", i);
//            }
//        }
//        i++;
//        if (sum > l) {
//            sum -= i;
//            cnt--;
//            break;
//        }
//    }
//    printf("%d", cnt);
//
//
//    return 0;
//}


/*二分查找*/
//#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//此处可以替换为输入数组
//	int k;
//	scanf("%d", &k);
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0]))-1;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {//是数组元素于k比较，要不然下标会错误
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) {
//			left = mid + 1;
//		}
//		else if (arr[mid] == k) {
//			printf("已找到%d,下标为%d", k, mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("在这个数组里没有该数字");
//	}
//
//
//
//
//	return 0;
//}


//#include<stdio.h>//整体效率过低
//int is_prime(int a) {
//    int isprime = 1;
//    for (int i = 2; i < a; i++) {
//        if (a % i == 0) {
//            isprime = 0;
//        }
//    }
//    return isprime;
//}
//int reverse(int original) {
//    int store = 0;
//    while (original > store) {
//        store = store * 10 + original % 10;
//        original /= 10;
//    }
//    return (original == store || (store / 10 == original));
//
//}
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    for (int i = 5; i >= a && i <= b; i++) {
//        int isprime = 1;
//        isprime = is_prime(i);
//        int reverse_ha = reverse(i);
//        if (isprime && reverse_ha) {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}


/*等比数列*/
//#include<stdio.h>
//#include<math.h>
//int main() {
//    double s = 0.0;
//    scanf("%lf", &s);//输入目标距离
//    double m = 2;//刚开始能游2米
//    int distance = 0;//游的距离
//    double n = 0;
//    n = log(1 - s / 100) / log(0.98);//走的步数
//    int cnt = (int)ceil(n);//向上取整并且强制转换为整数
//    printf("%d", cnt);
//    return 0;
//}



/*反转字符串*/
//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right) {//字符串反转
//    while (left <= right) {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        left++;
//        right--;
//    }
//}
//int main() {
//    char old[100] = { 0 };
//    
//    scanf("%s", old);
//    int left = 0;
//    int right = strlen(old) - 1;
//    if (old[0] == '-') {
//        reverse(old + 1, old + right);
//        int i = 1;//去除前导零部分
//        while (old[i] == '0' && old[i + 1] != '\0') {//保证数字为零的时候正常输出
//            i++;
//        }
//        if (i > 1) {
//            int j = 1;
//            while (old[i] != '\0') { // 只要old[i]不是结束符，就继续移位
//                old[j] = old[i];//i的值对应的地方即为第一个不是0的位置，再用j=1零的位置替换为数字，最后加上结束符号
//                j++;
//                i++;
//            }
//            old[j] = '\0'; // 手动添加结束符
//        }
//    }
//    else {
//        reverse(old, old + right); 
//        int i = 0;//去除前导零部分
//        while (old[i] == '0' && old[i + 1] != '\0') {
//            i++;
//        }
//        if (i > 0) {
//            for (int j = 0; old[j] != '\0'; j++) {
//                old[j] = old[j + i ];
//            }
//        }
//    }
//    
//    
//    printf("%s", old);
//    return 0;
//}


/*最长连号*/
//#include<stdio.h>
//#include<string.h>
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void change(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n + 3] = { 0 };
//    int arr1[n] = { 0 };
//    int j = 0, i = 0;
//    int count = 1;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    for (i = 0; i < n; i++) {
//        if (arr[i] + 1 == arr[i + 1]) {
//            count++;
//        }
//        else {
//            arr1[j++] = count;
//            count = 1;
//        }
//    }
//
//    change(arr1, j);
//    printf("%d", arr1[j - 1]);
//    return 0;
//}


/*质因数分解*/
//#include<stdio.h>
//int max(int a, int b) {
//    if (a > b) {
//        return a;
//    }
//    else {
//        return b;
//    }
//}
//int main() {
//    int n;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 2; i < n; i++) {
//        if (n % i == 0) {
//            break;
//        }
//    }
//    int a = 0;
//    a = n / i;
//    int result = max(a, i);
//    printf("%d", result);
//    return 0;
//}


/*评分*/
//#include<stdio.h>
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//void change(int a[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1 - i; j++) {
//            if (a[j] > a[j + 1]) {
//                swap(&a[j], &a[j + 1]);
//            }
//        }
//    }
//}
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n] = { 0 };
//    double sum = 0.0;
//    double result = 0.0;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    change(arr, n);
//    arr[n] = 0;
//    arr[0] = 0;
//    for (int i = 0; i < n; i++) {
//        sum += i;
//    }
//    result = sum / n - 2;
//    printf("%.2f", result);
//    return 0;
//}


/*Davor*/
//#include<stdio.h>
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int x, k;
//    int result = 0;
//    result = n / 364;
//    for (x = 100; x >= 0;x--) {//倒序遍历，使得x最大，k最小
//        if ((result - x) % 3 == 0) {
//            k = (result - x) / 3;
//            if (k > 0) {
//                break;
//            }
//        }
//    }
//    printf("%d\n", x);
//    printf("%d\n", k);
//
//
//    return 0;
//}

/*小鱼比可爱*/
//#include<stdio.h>
//int main() {
//    int arr[13] = { 0 };
//    for (int i = 0; i < 12; i++) {
//        scanf("%d", &arr[i]);
//    }
//    int start = 300;
//    int remain = 0;
//    int sum = 0;
//    double result = 0;
//    int flag = 1;
//    int save = 0;
//    for (int month = 0; month < 12; month++) {
//        int total = remain + 300;//计算总钱数
//
//        if (total-arr[month]<0) {//判断是否有剩余
//            printf("-%d",month+1);
//            flag = 0;
//            break;
//        }
//        //有剩余，进行累加
//        
//        
//        save = total - arr[month];
//        if (save >= 100) {
//            int  save_month = (save / 100) * 100;
//            sum += save_month;
//            remain = save - save_month;
//        }
//        else {
//            remain = save;
//        }
//   
//    
//    
//
//    }
//    if (flag) {
//        result = sum * 1.2+remain;
//        printf("%d", (int)result);
//
//    }
//    return 0;
//}

/*小鱼*/
//#include<stdio.h>
//int main() {
//    int arr[101];
//    int i = 0;
//    int num = 0;
//    while (1) {
//        scanf("%d", &num);
//        if(num == 0) {
//            break;
//        }
//        arr[i] = num;
//        i++;
//    }
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%d ", arr[j]);
//    }
//
//
//    return 0;
//}


/*冰雹猜想*/
//#include<stdio.h>
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int s = n;
//    int cnt = 0;
//    int arr[100] = { 0 };
//    int i = 0;
//    arr[0] = s;
//    i++;
//    while (n != 1) {
//        if (n % 2 == 0) {
//            n = n / 2;
//            arr[i] = n;
//            i++;
//        }
//        else {
//            n = n * 3 + 1;
//            arr[i] = n;
//            i++;
//        }
//    }
//    
//    for (int j = i-1; j >= 0; j--) {
//        printf("%d ", arr[j]);
//    }
//    
//    return 0;
//}


/*实力相当的人*/
//#include<stdio.h>
//#include<math.h>
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int grade[n][3] = { 0 };
//    int sumgrade[n + 2] = { 0 };
//    int cnt = 0;
//    int sumgrademinus[n] = { 0 };
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < 3; j++) {
//            scanf("%d", &grade[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < 3; j++) {
//            sumgrade[i] += grade[i][j];
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            int chinese = abs(grade[i][0] - grade[j][0]);
//            int math = abs(grade[i][1] - grade[j][1]);
//            int eng = abs(grade[i][2] - grade[j][2]);
//            sumgrademinus[i] = abs(sumgrade[i] - sumgrade[j]);
//            if (chinese >= 5 && math >= 5 && eng >= 5 && sumgrademinus[i] >= 10) {
//                cnt++;
//            }
//        }
//    }
//    printf("%d", cnt);
//    return 0;
//}

//用到了bool标记法
/*校门外的树*/
//#include <iostream>   // 基础输入输出
//#include <cstdio>     // 兼容scanf/printf
//#include <cstring>    // 数组初始化等（若需要）
//using namespace std;
//bool tree[10010];
//int main() {
//    int l, m, sum = 0;
//    scanf("%d %d", &l, &m);
//    for (int i = 0; i < m; i++) {
//        int le, ri;
//        scanf("%d %d", &le, &ri);
//        for (int i = le; i <= ri; i++) {
//            if (tree[i] == 0) {
//                sum++;
//                tree[i] = 1;
//            }
//        }
//    }
//    printf("%d", l + 1 - sum);
//    return 0;
//}


//用到了bool标记法
/*工艺品制作*/
//#include<stdio.h>
//#include<stdbool.h>
//int main() {
//    int w, l, h;
//    scanf("%d %d %d", &w, &l, &h);
//    int q = 0;
//    scanf("%d", &q);
//    bool static mark[101][101][101] = { false };
//    for (int i = 0; i < q; i++) {
//        int x1, x2, x3, y1, y2, y3;//每次都定义一次
//        scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &y1, &y2, &y3);
//        for (int i = x1; i <= y1; i++) {
//            for (int j = x2; j <= y2; j++) {
//                for (int k = x3; k <= y3; k++) {
//                    mark[i][j][k] = true;//将去除的坐标标上true
//                }
//            }
//        }
//
//    }
//    int remain=0;
//    for (int i = 1; i <= w; i++) {
//        for (int j = 1; j <= l; j++) {
//            for (int k = 1; k <= h; k++) {
//                if (!mark[i][j][k]) {//检查仍为false的即为剩下的，可避免重复减去（重复减去用bool检查法）
//                    remain++;
//                }
//            }
//        }
//    }
//    printf("%d", remain);
//    return 0;
//}

/*顺序打印*/
//#include<stdio.h>
//void Print(int n) {
//	if (n > 9) {
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

/*十进制转二进制*/
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int arr[50] = {0};
//	int i = 0;
//	while (n > 0) {
//		arr[i] = n % 2;
//		n /= 2;
//		i++;
//	}
//	for (int j = i-1; j>=0; j--) {
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

/*大小写转换*/
//#include<stdio.h>
//int main() {
//	char input[300];
//	scanf("%s", input);
//	for (int i = 0; input[i] != '\0'; i++) {
//		if (input[i] > 'a' && input[i] < 'z') {
//			input[i] -= 32;
//		}
//	}
//	printf("%s", input);
//	return 0;
//}


/*素数因子*/
//#include<stdio.h>
//int is_prime(int n) {
//	if (n == 2) {
//		return 1;
//	}
//	else {
//		for (int i =2; i < n; i++) {
//			if (n % i == 0) {
//				return 0;
//			}
//			else {
//				return 1;
//			}
//		}
//	}
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	int a = 0;
//	for (int i = 2; i < input; i++) {
//		if (input % i == 0) {
//			a = i;
//			break;
//		}
//		else {
//			a = input;
//		}
//	}
//	int another = input/a;
//	int a1 = is_prime(another);
//	int a2 = is_prime(a);
//	if (another == 1) {
//		printf("%d", input);
//	}
//	else if (a1 && a2) {
//		printf("%d %d", a, another);
//	}
//	else if (a1) {
//		printf("%d", another);
//	}
//	else if(a2) {
//		printf("%d", a);
//		
//	}
//	return 0;
//}


/*求s=a+aa+aaa+...+a...a*/
//#include<stdio.h>
//int fuc(int n,int a) {
//	if (n == 1) {
//		return a;
//	}
//	else {
//		return fuc(n - 1, a) * 10 + a;
//	}
//}
//int main() {
//	int n, a;
//	scanf("%d %d", &n, &a);
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		
//		sum += fuc(i,a);
//	}
//	printf("%d", sum);
//	return 0;
//}


/*循环计算分数*/
//#include<stdio.h>
//#include<math.h>
//int main() {
//	double x = 0,eps=0;
//	scanf("%lf %lf", &x, &eps);
//	float result = 0.0;
//	int i = 1;
//	double sum = 0.0;
//	double current = x;
//	double sign = -1.0;
//	while (fabs(current) >= eps) {
//		sum += current;
//		double odd = 1.0;
//		double even = 1.0;
//		for (int j = 1; j <= i; j++) {
//			odd *= (2 * j - 1);
//		}
//		for (int j = 1; j <= i; j++) {
//			even *= (2 * j);
//		}
//		double power = pow(x, 2 * i + 1);
//		double last = 2 * i+2;
//
//		
//		current=sign*(odd/even)*(power/last);
//		sign *= -1;
//		i++;
//			
//	}
//	sum += current;
//	printf("%.6f", sum);
//	return 0;
//}
//


/*字母计数题目*/
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char man[50];
//	char n;
//	
//	scanf("%s\n", man);//这个\n就是「换行符」，它的核心作用是「标记一次输入的结束」
//	scanf("%c", &n);
//	int cnt = 0;
//	for (int i = 0; man[i] != '\0'; i++) {
//		if (man[i]==n) {
//			cnt++;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}


/*去除*号*/
//#include<stdio.h>
//void fun(char arr[]) {
//	int i = 0;
//	while(1) {
//		if (arr[i] != '*') {
//			break;
//		}
//	
//		i++;
//	}
//	int j = i;
//	int k = i;
//	while (arr[k] != '\0') {
//		if (arr[k] != '*') {
//			arr[j++] = arr[k];//前后交换方法
//		}
//		k++;
//	}
//	arr[j] = '\0';
//	printf("%s", arr);
//}
//int main() {
//	char arr[50];
//	scanf("%s", arr);
//	int i = 0;
//	fun(arr);
//	
//	return 0;
//}


/*统计学生数据*/
//#include<stdio.h>
//struct all {
//	int num;
//	char name[10];
//	int grade1;
//	int grade2;
//	int grade3;
//	int sum;//每一位同学的总和，不是数组
//};
//void swapstruct(struct all* a, struct all* b) {
//	struct all temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main() {
//	struct all stu[10];
//	for (int i = 0; i < 10; i++) {
//		scanf("%d %s %d %d %d", &stu[i].num, &stu[i].name, &stu[i].grade1, &stu[i].grade2, &stu[i].grade3);
//	}
//	for (int i = 0; i < 10; i++) {
//		stu[i].sum = (stu[i].grade1 + stu[i].grade2 + stu[i].grade3);
//	}
//	double average[3] = {0.0};//初始化
//	for (int i = 0; i < 10; i++) {
//		average[0] += stu[i].grade1;
//		average[1] += stu[i].grade2;
//		average[2] += stu[i].grade3;
//	}
//	printf("%.2f %.2f %.2f\n",average[0] /= 10.0, average[1] /= 10.0, average[2] /= 10.0);
//
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9 - i; j++) {
//			if (stu[j].sum < stu[j + 1].sum) {
//				swapstruct(&stu[j], &stu[j + 1]);
//			}
//		}
//	}
//	printf("%d %s %.2f %.2f %.2f %.2f\n", stu[0].num, stu[0].name, (double)stu[0].grade1, (double)stu[0].grade2, (double)stu[0].grade3, (double)stu[0].sum);
//	return 0;
//}

/*判断回文数*/
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[100] = {0};
//	char arr1[100] = {0};
//	char arr2[100]={0};
//	scanf("%s", arr);
//	int length = strlen(arr);
//	int len = length / 2;
//	int j = 0,k=0;
//	for (int i = length - 1; i >=len; i--) {
//		arr1[j++] = arr[i];
//	}
//	for (int i = 0; i<len; i++) {
//		arr2[k++] = arr[i];
//	}
//	if (strcmp(arr1, arr2)) {
//		printf("No");
//	}
//	else {
//		printf("Yes");
//	}
//	return 0;
//}

/*蛇形矩阵*/
//#include<stdio.h>
//int main() {
//	int n = 0, arr[105][105] = {0},cnt=1;
//	scanf("%d", &n);
//	for (int i = 0; i < 2 * n - 1;i++) {//需要2*n-1行才能将最后一个数字输出
//		int h = i, l = 0;//h为行,l为列
//		while (h >= 0) {
//			if (h < n && l < n) {//将矩阵限制在n行n列
//			if (i % 2 != 0) {//通过行数奇偶来判断输入方法
//					arr[h][l] = cnt++;
//			}
//			else {
//				arr[l][h] = cnt++;
//			}
//		}
//			h--, l++;
//		}
//		
//	}
//	for (int i = 0; i <  n ; i++) {
//		for (int j = 0; j < n ; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


