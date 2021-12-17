#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float deviation =0;
    float mean = 0;
    string number;
    ifstream num;
    num.open ("score.txt");
    while (getline(num,number))
    {
        sum += stod(number);
        deviation += stod(number)*stod(number);
        count++;

    }
    mean = sum/count ;
    cout << "Number of data = "<< count << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n'; 
    cout << "Standard deviation = " <<sqrt(((deviation)/count)-(mean*mean)) ;
    num.close();
}