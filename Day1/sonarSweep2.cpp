#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int inputLength = 2000; //small input = 10, regular input = 2000
    const int measurementLength = inputLength + 2;
    ifstream input ("./input.txt"); //small input = ./smallInput.txt, regular input = ./input.txt
    
    //int inputNums[length];
    int measurements[measurementLength] = {0};
    int measurementCount = 0;
    if(input.is_open()){
        for (int i = 0; i < inputLength; i++){
            string line;
            input >> line;
            int num = stoi(line);
            measurements[measurementCount] += num;
            measurements[measurementCount+1] += num;
            measurements[measurementCount+2] += num;
            measurementCount++;
        }
    }
    

    int count = 0;
    for (int i = 2; i <= measurementLength - 3; i++){
        if(measurements[i] > measurements [i-1] && i !=2 ){
            count++;
        }
    }

    cout << "Increased " << count << " amount of times." << endl;
    return 0;
}