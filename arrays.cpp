// COMSC-210-5470 | Lab 6 | Diksha Tara Natesan
// IDE used: Vim

#include <iostream>
using namespace std;


// enterArrayData() asks for user input to populate the given dynamic array
// arguments: double *arr (a dynamic array pointer)
// returns: nothing
void enterArrayData(double *arr){
    cout << "Data entry for the array:\n";
    for (int i = 0; i < 5; i++){ //how do i make it so i < size when size is NOT 5
        cout << "   > Element #" << i << ": ";
        cin >> arr[i];
    }
    cout << "Data entry complete." << endl;
}

int main(){
    double *dynArr = nullptr;
    dynArr = new double[5];
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
