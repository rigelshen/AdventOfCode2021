#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int length = 2000; //small input = 10, regular input = 2000
    ifstream input ("./input.txt");
    int inputNums[length];
    int previousNum = 0;
    int count = 0;
    if(input.is_open()){
        for (int i = 0; i < length; i++){
            string line;
            input >> line;
            int num = stoi(line);
            if (num > previousNum && i != 0){
                count++;
            }
            previousNum = num;
        }
    }
    cout << "Increased " << count << " amount of times." << endl;
    return 0;
}