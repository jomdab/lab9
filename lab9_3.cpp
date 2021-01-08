#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    int i=0;
    double sum,sum2;
    string t;
    ifstream source;
    source.open("score.txt") ;
    while (getline(source,t))
    {
        sum+=atof(t.c_str());
        i++;
    }
    source.close();
    source.open("score.txt") ;
    t="";
    while (getline(source,t))
    {
        sum2+=pow(atof(t.c_str())-sum/i,2);
        
    }
    
    cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<sum/i<<endl;
    cout << "Standard deviation = "<<sqrt(sum2/i);
    }
