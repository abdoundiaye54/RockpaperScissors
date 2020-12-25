#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
/*This is a rock papaer scissors game  */


int main(){

srand(time(NULL));

int computer=rand() % 3+1;

int user;

cout<<" ** * ** * ** * ** * ** * ** * **\n ";
cout<<"*                                 *\n ";
cout<<"* Welcome to Rock Paper scissors! *\n ";
cout<<"*                                 *\n ";
cout<<"* ** * ** * ** * ** * ** * ** * **\n ";

cout<<""<<endl;

cout<<" * ** * ** Directions! * ** * *\n ";
cout<<"\n ";

cout<<"Choose a number from below"<<endl;
cout<<"\n ";
cout<<"1) Rock  \n ";
cout<<"2) Paper\n ";
cout<<"3) scissors\n ";
cout<<"\n ";
cout<<"Please choose a number: ";
cin>>user;

cout<<"Computer chose:"<<computer<<endl;

//THIS IS WHEN THERE IS A TIE
if (user==computer){

  cout<<"Wow!! its a TIE!!! Try again!!!";
}
//THIS IS WHEN USER CHOOSES ROCK
 else if (user==1){

   if (computer==2){

     cout<<"OH OH you lost :( Try again:"<<endl;
   }else if (computer==3){

     cout<<"Congrats YOu won!!!! :)"<<endl;
   }
 } else if (user==2){

   if (computer==1){

     cout<<"Congrats YOu won!!!! :)"<<endl;
   }else if (computer==3){

     cout<<"OH OH you lost :( Try again:"<<endl;
   }
 }else if (user==3){

   if (computer==1){

     cout<<"OH OH you lost :( Try again:"<<endl;
   }else if (computer==2){

     cout<<"Congrats YOu won!!!! :)"<<endl;
   }
 }
















  return 0;

}
