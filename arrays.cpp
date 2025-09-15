// COMSC-210-5470 | Lab 6 | Diksha Tara Natesan
// IDE used: Vim

#include <iostream>
using namespace std;

const int SIZE = 5, MIN = 1, MAX = 10;

// enterArrayData() asks for user input to populate the given dynamic array
// arguments: double *arr (a dynamic array pointer)
// returns: nothing
void enterArrayData(double *arr){
    cout << "Data entry for the array:\n";
    for (int i = 0; i < SIZE; i++){
        cout << "   > Element #" << i << ": ";
        cin >> arr[i];
    }
    cout << "Data entry complete." << endl;
}



void outputArrayData(double *arr){
    cout << "Outputting array elements:";
    for (int i = 0; i < SIZE; i++)
        cout << " " << *(arr + i);
    cout << endl;
}


double sumArray(double *arr){
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += *(arr + i);
    return sum;
}

int main(){
    double *dynArr = nullptr;
    dynArr = new double[SIZE];
    enterArrayData(dynArr);
    outputArrayData(dynArr);
    cout << sumArray(dynArr) << endl;
    delete [] dynArr;
}
/*
double *ptr = nullptr;
ptr = new double;

//dynamic array
double *dynArr = nullptr;
dynArr = new double[SIZE];

delete [] dynArr;*/
