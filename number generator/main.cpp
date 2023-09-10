#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <array>
using std::array;

#include <random>
using std::rand;


array<int, 30> returnNumbers(int totalNumbers);

int main(){

    array<int, 30> numbers;
    int totalNumbers;

    cout << "How many numbers do you want to generate? > ";
    cin >> totalNumbers;

    if(totalNumbers <= 30 && totalNumbers > 0){
        
        numbers = returnNumbers(totalNumbers);
        string number;

        for(int c = 0; c < totalNumbers; c++){
            number = std::to_string(numbers[c]);
            int spaces = number.length();
            string concatZeros;

            if(spaces >= 7) continue;
            else{
                for(int d = 7 - spaces; d > 0 ; d--){
                    concatZeros += "0";
                }
                number = concatZeros + number;
            }
            
            cout << "\t" << c + 1 <<" - [" << number << "]" << endl;
        }
        cout << endl;

    }else{
        cout << "Number too long or too low" <<endl;
    }

    return 0;
}

array<int, 30> returnNumbers(int totalNumbers){
    array<int, 30> numbers;

    for(int c = 0; c < totalNumbers; c++){
        numbers[c] = rand() % 1000000 + 1;
    }

    return numbers;
};

