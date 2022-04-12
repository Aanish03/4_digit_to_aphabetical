#include<stdio.h>
#include<conio.h>

void main(){
    int  b, c ;
    int a[4];
    int i ; 
    char *array_1[100] ={ 
       "" ,
    "one thousand " 
    , "two thousand " 
    ,"three thousand " 
    ,"four thousand "
    ,"five thousand "
    ,"six thousand "
    ,"seven thousand "
    ,"eight thousand "
    ,"nine thousand "
    ,"ten thousand "

    };
    char *array_2[100]={
	"",
	"one hundred  ",
	"two hundred "
    ,"three hundred "
    ,"four hundred "
    ,"five hundred "
    ,"six hundred "
    ,"seven hundred "
    ,"eight hundred "
    , "nine hundred"
    ,""

    };

    char *array_3[100] = {
	"",
	"ten",
	"twenty",
	"thirty",
	"fourty",
	"fifty",
	"sixty",
	"seventy",
	"eighty",
	"ninety"


    };

    char *four[100] ={
	"",
	"one",
	"two",
	"three",
	"four",
	"five",
	"six",
	"seven",
	"eight",
	"nine",
	""
    };

int a1 = a[0];
int b1 = a[1];
int c1 = a[2];
int d1 = a[3];

clrscr();
for(i = 0; i <= 3; i++){

    printf("enter %d digit of 4 digits \n   " , i+1 );

    scanf("%d",&a[i]);
}
    printf("%s %s %s%s ",array_1[a[0]],array_2[a[1]],array_3[a[2]] , four[a[3]]);
getch();
}
