// COMSC-210-5470 | Lab 6 | Diksha Tara Natesan
// IDE used: Vim

#include <iostream>
using namespace std;

void enterArrayData(double *arr){
    cout << "Data entry for the array:\n";
    for (int i = 0; i < SIZE; i++){
        cout << "   > Element #" << i << ": ";
        cin >> arr[i];
    }

}

int main(){
    double *dynArr = nullptr;
    dynArr = new double[SIZE];
    enterArrayData(dynArr);
    delete [] dynArr;
}
/*
double *ptr = nullptr;
ptr = new double;

//dynamic array
double *dynArr = nullptr;
dynArr = new double[SIZE];

delete [] dynArr;*/
