#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;
    
    cout<<"***** Welcome to Guessing game *****"<<endl;
do
{
cout<<"Guess the number : ";
cin>>guessed_number;
no_of_guesses++;
if(guessed_number>randomNumber){
    cout<<"Your guess is too high.Try a lower number\n";
}
else if(guessed_number<randomNumber){
    cout<<"Your guess is too low. Try a higher number\n";
}else{
    cout<<endl;
    cout<<"Corect ! You guess the number \n";
}
} while (guessed_number!=randomNumber);
cout<<"Your guessed number is "<<no_of_guesses;
return 0;
}