#include <iostream>
using namespace std;

int main() {

int Gender,Body,Height,knowlege ;

cout << "Choose a Partner" << endl;

cout << "Select gender \n 1.Male \n 2.Female"<< endl;

cin >> Gender;

cout << "Select body type \n 1.Thick \n 2.Fit \n 3.Thin "<< endl;

cin >> Body;

cout << "Select height \n 1.Tall \n 2.Short "<< endl;

cin >> Height;


cout << "Select the knowlegde you represent that \n 1. Smart \n 2. Smart a bit \n 3. not that smart" <<endl;

 cin >> knowlege;

if (Gender == 1) {
if (Body == 1 && Height == 1 && knowlege == 1) {
cout << "You're looking for a tall and thick gent and smart gent" << endl;}
else if (Body == 1 && Height == 2 && knowlege == 2) {
cout << "You're looking for a short and thick gent who is alittle bit smart!" << endl;}
else if (Body == 2 && Height == 1 && knowlege == 3) {
cout << "You're looking for a tall and fit gent who is not that smart!" << endl;}
 else if (Body == 2 && Height == 2) {
cout << "You're looking for a short and fit gent!" << endl;}
else if (Body == 3 && Height == 1) {
cout << "You're looking for a tall and thin gent!" << endl;}
else if (Body == 3 && Height == 2) {
cout << "You're looking for a short and thin gent!" << endl;}
else {
cout << "There is no one for you." << endl;}
}

else if (Gender == 2) {
if (Body == 1 && Height == 1 && knowlege == 1) {
cout << "You're looking for a tall and thick hun who is smart hun!" << endl;}
else if (Body == 1 && Height == 2 && knowlege == 2) {
cout << "You're looking for a short and thick hun who is a little smart !" << endl;}
 else if (Body == 2 && Height == 1 && knowlege == 3) {
cout << "You're looking for a tall and fit hun who is  not that smart!" << endl;}
 else if (Body == 2 && Height == 2) {
cout << "You're looking for a short and fit hun!" << endl;}
else if (Body == 3 && Height == 1) {
cout << "You're looking for a tall and thin hun!" << endl;}
 else if (Body == 3 && Height == 2) {
cout << "You're looking for a short and thin hun!" << endl;}
else {
cout << "There is no one for you." << endl;}
    }
 else {
cout << "choose between 1 or 2 only please." << endl;}


return 0;
}