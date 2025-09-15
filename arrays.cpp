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
        cin >> *(arr + i); //pointer notation
    }
    cout << "Data entry complete." << endl;
}

// outputArrayData() prints the values stored in each element of the given dynamic array out on one line
// arguments: double *arr (a dynamic array pointer)
// returns: nothing
void outputArrayData(double *arr){
    cout << "Outputting array elements:";
    for (int i = 0; i < SIZE; i++)
        cout << " " << *(arr + i);
    cout << endl;
}

// sumArray() adds the values up from each element within the given dynamic array
// arguments: double *arr (a dynamic array pointer)
// returns: sum of the values stored in the dynamic array
double sumArray(double *arr){
    double sum = 0;
    for (int i = 0; i < SIZE; i++)
        sum += *(arr + i);
    return sum;
}

// main() creates a dynamic array and passes it through the three functions created above then deletes the memory once the array's use is complete
// arguments: nothing
// returns: nothing
int main(){
    double *dynArr = nullptr;
    dynArr = new double[SIZE];
    enterArrayData(dynArr);
    outputArrayData(dynArr);
    cout << "Sum of values: " << sumArray(dynArr) << endl;
    delete [] dynArr;
}


/* notes/basic reference from the lesson 
double *ptr = nullptr;
ptr = new double;

//dynamic array
double *dynArr = nullptr;
dynArr = new double[SIZE];

delete [] dynArr;*/
