#define normal  "\x1B[0m"
#define red  "\x1B[31m"
#define green  "\x1B[32m"
#define yellow "\x1B[33m"
#define blue "\x1B[34m"
#define magenta  "\x1B[35m"
#define cyan  "\x1B[36m"
#define white "\x1B[37m"
void printfclr(char color[256], char message[1024]){
	printf("%s%s%s",color,message,normal);
}
