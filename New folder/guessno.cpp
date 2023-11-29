#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(static_cast<unsigned int>(time(NULL)));
    int number_to_be_guessed=rand()%100+1;
    int number_guessed;
    int count=0;
    cout<<"Welcome to the Guess the Number game!"<<endl;
    cout<<"I have selected a random number between 1 and 100. Try to give it a guess!!!"<<endl;
        do{
		
        cout<<"Enter your guess: ";
        cin>>number_guessed;
        count++;
        if (number_guessed<number_to_be_guessed) {
            cout<<"Too low! Try again."<<endl;
        } else if(number_guessed>number_to_be_guessed){
            cout<<"Too high! Try again."<<endl;
        } else {
            cout<<"Congratulations! You guessed the number "<<number_to_be_guessed<<" in "<<count <<" count!"<<endl;
        }
    } while(number_guessed!=number_to_be_guessed);
    
    return 0;
}
