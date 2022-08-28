#include<stdio.h>

int main(void){
	int i;
	
	struct birthDate{
		int day;
		int month;
		int year;
	};
	struct person_data{
		char name[40];
		int lenght;
		struct birthDate date;
	};
	struct person_data person[3] = {"ali" , 162 , {17 ,2 , 1976} ,
	                               "ahmet" , 168 , {12 ,12 , 1999}, 
								   "veli" , 170 , {6 ,4 , 1986}};
	                               
	for ( i= 0 ; i < 3 ; i++){
		printf("record no: %d\n" , (i+1));
		printf("name: %s\n" , person[i].name );
		printf("lenght: %d\n" ,person[i].lenght) ;
		printf("birth day : %d-%d-%d\n\n" , person[i].date.day,
		                                    person[i].date.month,
	                                        person[i].date.year);
	}
	return 0;
	
	}
