#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
struct S {
	char s[20];
	int age;
	int height;
};
int main() {
	FILE* fg = fopen("new file.txt", "r");
	if (fg == NULL) 
	{
		/*printf("%s", strerror(errno));*/      //会返回char* 类型的指针
		perror("fopen");//不会返回值
		return 1;
	}
	//写文件（字符串型）
	/*for (char i = 'a'; i <= 'z'; i++) {
		fputc(i, fg);
	}*/

	//写文件(字符串型)
	/*char ch = 0;
	while ((ch = fgetc(fg)) != EOF) {
		printf("%c ", ch);
	}*/

	//sprintf:将格式化的数据转换为字符串中
	//从一个字符串中转化为格式化数据

	//将内容读入到文件中
	struct S s = { "zhansan",20,184};
	fprintf(fg, "%s %d %d", s.s, s.age, s.height);
	fprintf(stdout, "%s %d %d", s.s, s.age, s.height);//用stdout 也可以将数据打印到屏幕上
	


	//将文件中的信息输出出来
	struct S s = { 0 };
	fscanf(fg, "%s %d %d", &(s.s), &(s.age), &(s.height));
	printf("%s %d %d", s.s, s.age, s.height);
	fclose(fg);
	fg = NULL;
	return 0;
}