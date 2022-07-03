#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
#define max_msg 250
void ecryptioninput();
void compare(int value);
int power(int pow);
void breakline();
void encryption();
void encrypt(char par);
void decryption();
void decrypt(int start,int last);
void starter();
void reset();
int msg[1500];
int choice;
char str[max_msg];
char *p = str;
char arr[40];
int main(){
 
 int i;
	    for( i=10; i<=68 ;i++){
	     arr[i]='A'+i-10;       }
	for( i=0; i<10 ;i++){
	    arr[i]='0'+i;       }
		arr[69]=' ';
		arr[70]=',';
		for(i=71;i<=86;i++)
		arr[i]='!'+1;
		arr[87]='@';
 	     
	starter();
	while(1)
	{
		
		printf("\tENTER YOUR CHOICE: ");
		scanf(" %d",&choice);
		switch(choice){
			case 1 :
						choice=0;
						encryption();
						break;
			case 2 :    
						choice=0;
						decryption();
						break;
			case 0 :    
						choice=0;
						exit(0);
						break;				
			default :
						printf("\n");
						system("color 4");
						printf("\t\t\t\t\t    WRONG CHOICE \n");
						printf("\n");
						breakline();
						printf("\n");
						system("pause");
						system("cls");
						starter();
						choice=0;
						break;		
		}		
	}
	return 0;
}

void breakline(){
	int i=0;
	for(;i<120;i++)
	printf("~");
	printf("\n");
	return ;
}

void encryption(){
	char val;
	int count=0;
	system("color 7");
	system("cls");
	printf("\n\t\t\t\t\t    MESSAGE ENCRYPTION \n");
	printf("\n");
	breakline();
	printf("\n");
	ecryptioninput();
	while( *p != '\0' ){
		val = *p;
		encrypt(val);
		count++;
		p++;
	}
	count--;
	printf("\n\tTHE KEY OF ENCRYPTED MESSAGE IS = %d  ",count*7);
	printf("\n");
	printf(" \n");
	system("pause");
	system("cls");
	starter();
	reset();
return ;
}
void ecryptioninput(){
		printf("\n\tENTER THE MESSAGE TO ENCRYPT (250 CHARACTERS) :- \n");
		while ((getchar()) != '\n');
		printf(" \n");
		fgets(str, max_msg, stdin);
	return ;
}
void encrypt(char par){
		int i,up,down,temp;
		int array[1000];
	    char lettr = par;
	   
	    for(i=0;i<=87;i++)
	    {
	    	temp=i;
			 if(lettr == arr[i]){	 
				   up=0;
				
				   if(temp<1&&temp>=0)
				printf(" 0  0  0  0  0  0  0 ");
				    if(temp<2&&temp>=1)
				printf(" 0  0  0  0  0  0 ");
				   if(temp<4&&temp>=2)
				printf(" 0  0  0  0  0 ");
				 if(temp<8&&temp>=4)
				printf(" 0  0  0  0 ");
				if(temp>=8&&temp<16)
				printf(" 0  0  0 ");
			 if(temp<32&&temp>=16)
				printf(" 0  0 ");
				 if(temp>=32&&temp<64)
				printf(" 0 ");
				while(temp>0)
				{ 
					array[up] = temp % 2;
					temp= temp/2;	
						up++;
				}
				for(down=up-1;down>=0;down--){
				printf(" %d ",array[down]);
				}
					
				
			
					printf("\n");
			}
			
		}
		return ;
	}
					
void decryption(){
	int length,start=0,last=7;
	int i;
	system("color 03");
	system("cls");
	printf("\n\t\t\t\t\t    DECRYPT THE MESSAGE \n");
	printf("\n");
	breakline();
	printf("\n");
	printf("\tENTER THE ENCRYPTION KEY = ");
	scanf(" %d",&length);
	printf("\tENTER THE ENCRYPTED MESSAGE :- \n");
	for(i=0;i<length;i++)
	scanf("%d",&msg[i]);
	while(start != length){
		decrypt(start,last);
		start=last;
		last=last+7;
	}
	printf("\n");
	system("pause");
	system("cls");
	starter();
	return;
}
void decrypt(int start,int last){
	int i,value=0,j=6;
	for(i=start;i<last;i++){
		value=value+msg[i]*power(j);
		j--;
	}
	j=6;
	compare(value);
	return;
}

int power(int pow){
	int i=0,ans=1;
	for(i=0;i<pow;i++)
	{
		ans=ans*2;
	}
	return ans;
}
void compare(int value){
	int i;
		for(i=0;i<88;i++){
		if(i==value){
			printf("%c",arr[i]);
		}
	}
	return ;
}
void starter(){
		printf("\n");
		system("color 0A");
		printf("\t\t\t\t\t    WELCOME TO MESSAGE ECNRYPTION \n");
		printf("\n");
		breakline();
		printf("\n");
		printf("\tPRESS 1 TO ENCRYPT THE MESSAGE \n");
		printf("\n");
		printf("\tPRESS 2 TO DECRYPT THE MESSAGE \n");
		printf("\n");
		printf("\tPRESS 0 TO EXIT FROM PROGRAM \n");
		printf("\n");	
	return;
}
void reset(){
	p=str;
}
	/*	arr[10]='a',arr[11]='b',arr[12]='c',arr[13]='d',arr[14]='e',arr[15]='f',arr[16]='g',arr[17]='h',
	    arr[18]='i',arr[19]='j',arr[20]='k',arr[21]='l',arr[22]='m',arr[23]='n',arr[24]='o',arr[25]='p',
	    arr[26]='q',arr[27]='r',arr[28]='s',arr[29]='t',arr[30]='u',arr[31]='v',arr[32]='w',arr[33]='x',
	    arr[34]='y',arr[35]='z',*/

