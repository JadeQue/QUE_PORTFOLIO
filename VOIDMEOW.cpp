#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

void login();
void registered();

char user[50], pass[50];


main () {
clrscr();

int choose;
cout<<endl<<"          **********MENU**********";
cout<<endl<<"          [1] - Register";
cout<<endl<<"          [2] - Login";
cout<<endl<<"          [3] - Quit";

start:
cout<<endl<<"          ***********************";
cout<<endl<<"Option: ";
cin>>choose;

switch(choose) {
	case 1:
	registered();
	break;

	case 2:
	login();
	break;

	case 3:
	cout<<"Goodbye!";
	getch();
	exit(0);
  }
  return 0;
}


void registered() {
  cout<<endl<<"**********REGISTRATION**********";
  cout<<endl<<"Username: ";
  gets(user);

  start:
  cout<<"Password: ";
  gets(pass);

  int vowel = 0, num = 0;
  for(int i = 0; pass[i] != '\0'; i++) {
    if(pass[i] == 'a'|| pass[i] == 'e' || pass[i] == 'i'
    || pass[i] == 'o' || pass[i] == 'u' || pass[i] == 'A'|| pass[i] == 'E'
    || pass[i] == 'I'|| pass[i] == 'O' || pass[i] == 'U') {
	vowel++;
    } else if(pass[i] == '0'|| pass[i] == '1' || pass[i] == '2'
    || pass[i] == '3' || pass[i] == '4' || pass[i] == '5'|| pass[i] == '6'
    || pass[i] == '7'|| pass[i] == '8' || pass[i] == '9') {
	num++;
    }
  }

    if(strlen(pass) < 8 || strlen(pass) > 12) {
	cout<<"Invalid: password must be 8 to 12 characters long\n"<<endl;
	goto start;
    } else if (vowel < 2) {
	cout<<"password must contain at least 2 vowels\n"<<endl;
	goto start;
    } else if (num < 2) {
	cout<<"password must contain at least 2 numbers\n"<<endl;
	goto start;
    } else {
	cout<<"Account successfully registered\n"<<endl;
	getch();
	main();
   }
}

void login() {
int max = 3, attempts = 0;
char reenter[50], og[50];

  while(attempts < max) {
   cout<<endl<<"**********lOGIN**********";

   again:
   cout<<endl<<"Username: ";
   gets(og);

   cout<<"Password: ";
   gets(reenter);

   if(attempts == 2) {
	cout<<endl<<"Maximum number of attempts exceeded. Program Terminated!";
	getch();
	exit(0);
   }


   if (strcmp(user, og) != 0 || strcmp(pass, reenter) != 0) {
    cout<<endl<<"Invalid Username or Password"<<endl;
    attempts++;
    goto again;
   } else {
    cout<<endl<<"Login Successfully!";
    getch();
    exit(0);
   }
}

}






