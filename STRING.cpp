#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main () {
clrscr();

char country[100];

cout<<endl<<"Well-known Countries and their Capital Cities"<<endl;
cout<<endl<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

start:
cout<<endl<<"Enter country: ";
gets(country);
strlwr(country);

 if (strcmp(country, "quit") == 0) {
  cout<<"Program Terminated";
  getch();
  exit(0);
  }

  if (strcmp(country, "argentina") == 0) {
  cout<<"Buenos Aires"<<endl;
  goto start;

  } else if (strcmp(country, "australia") == 0) {
  cout<<"Canberra"<<endl;
  goto start;

  } else if (strcmp(country, "brazil") == 0) {
  cout<<"Brasilia"<<endl;
  goto start;

  } else if (strcmp(country, "china") == 0) {
  cout<<"Beijing"<<endl;
  goto start;

  } else if (strcmp(country, "denmark") == 0) {
  cout<<"Copenhagen"<<endl;

  } else if (strcmp(country, "egypt") == 0) {
  cout<<"Cairo"<<endl;

  } else if (strcmp(country, "france") == 0) {
  cout<<"Paris"<<endl;
  goto start;

  } else if (strcmp(country, "georgia") == 0) {
  cout<<"Tbilisi"<<endl;

  } else if (strcmp(country, "germany") == 0) {
  cout<<"Berlin"<<endl;

  } else if (strcmp(country, "greece") == 0) {
  cout<<"Athens"<<endl;

  } else if (strcmp(country, "japan") == 0) {
  cout<<"Tokyo"<<endl;
  goto start;

 } else if (strcmp(country, "korea") == 0) {
  cout<<"Seoul"<<endl;
  goto start;

  } else if (strcmp(country, "philippines") == 0) {
  cout<<"Manila"<<endl;
  goto start;

  } else if (strcmp(country, "saudi arabia") == 0) {
  cout<<"Riyadh"<<endl;
  goto start;

  } else if (strcmp(country, "singapore") == 0) {
  cout<<"Singapore"<<endl;
  goto start;

  } else if (strcmp(country, "spain") == 0) {
  cout<<"Madrid"<<endl;
  goto start;

  } else if (strcmp(country, "sweden") == 0) {
  cout<<"Stockholm"<<endl;
  goto start;

  } else if (strcmp(country, "switzerland") == 0) {
  cout<<"Bern"<<endl;
  goto start;

  } else if (strcmp(country, "taiwan") == 0) {
  cout<<"Taipei"<<endl;
  goto start;

  } else if (strcmp(country, "thailand") == 0) {
  cout<<"Bangkok"<<endl;
  goto start;

  } else if (strcmp(country, "turkey") == 0) {
  cout<<"Ankara"<<endl;
  goto start;

  } else if (strcmp(country, "ukraine") == 0) {
  cout<<"Kyiv"<<endl;
  goto start;

  } else if (strcmp(country, "united kingdom") == 0) {
  cout<<"London"<<endl;
  goto start;

  } else if (strcmp(country, "united states") == 0) {
  cout<<"Washington, D.C."<<endl;
  goto start;

  } else if (strcmp(country, "vietnam") == 0) {
  cout<<"Hanoi"<<endl;
  goto start;

 } else {
  cout<<"Unknown Country!"<<endl;
  goto start;
 }

getch();
return 0;
}