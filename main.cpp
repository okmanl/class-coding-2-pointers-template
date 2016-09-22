/** do problem 8 test
 * POINTERS TUTORIAL
 * CREDIT: tutorials point c++ pointer tutorials
 * http://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
 */
#include <iostream>

#define MAX 3
using namespace std;

namespace example1 {
    void example() {
        //pointers basic 1
        //TODO 1 - create var1 of type int
        //TODO 1 - create a character array var2 that can hold 10 elements


        //TODO 1
        int var1;
        char var2[10];
        cout << "Size of var1 variable: ";

        //TODO 1
        cout << sizeof(var1) << endl;
        cout << "Size of var2 variable: ";
        cout << sizeof(var2) << endl;


        //TODO 1
        cout << "Address of var1 variable: ";
        cout << &var1 <<endl;

        //TODO 1
        cout << "Address of var2 variable: ";
        cout <<&var2 <<endl;
    }
}

namespace example2 {
    void example() {
//pointers basic 2
//TODO 2 - create a integer variable var holding some value
        int var = 32;
//TODO 2 - create a pointer of type int
        int *ptr;
//TODO 2 - store address of var into pointer
        ptr = &var;
//TODO 2
        cout << "Value of var variable: " << var << endl;
//TODO 2 // print the address stored in ip pointer variable
        cout << "Address stored in ip variable: " << ptr << endl;
//TODO 2// access the value at the address available in pointer
        cout << "Value of *ip variable: " << *ptr << endl;
//TODO 2
        cout << "Address of *ip variable: " << &*ptr << endl;
//TODO 2 - set the pointer to null pointer
        *ptr = NULL;
        cout << "The value of ptr is " << ptr;

    }
}

namespace example3 {
    void example() {
        //pointer addition

        //TODO 3 - integer array of size MAX
        //TODO 3 - integer pointer
        const int MAX = 10;
        int var1[MAX];
        int *var2;


        // let us have array address in pointer.

        //TODO 3 - point pointer to variable
        for (int i = 0; i < MAX; i++){
            //TODO 3
            //&var2;
            cout << "Address of var[" << i << "] = ";

            //TODO 3
            cout << "Value of var[" << i << "] = ";

            //TODO 3// point to the next location
          
        }
    }
}

namespace example4 {
    void example() {

        //pointer subtraction

        //TODO 4 - integer array of size MAX
        //TODO 4 - integer pointer

        //TODO 4// let us have address of the last element in pointer.

        for (int i = MAX; i > 0; i--) {
            //TODO 4
            cout << "Address of var[" << i << "] = ";

            //TODO 4
            cout << "Value of var[" << i << "] = ";

            //TODO 4
            // point to the previous location
        }
    }
}

namespace example5 {
    void example() {

        //comparing pointers

        //TODO 5 - integer array of size MAX
        //TODO 5 - integer pointer

        //TODO 5// let us have address of the first element in pointer.
        int i = 0;
        //TODO 5 iterate from &variable[MAX-1] to ptr
        while (42) {

            //TODO 5
            cout << "Address of var[" << i << "] = ";

            //TODO 5
            cout << "Value of var[" << i << "] = ";

            //TODO 5// point to the next location

            i++;
        }
    }
}

namespace example6 {
    void example() {

        //incorrect pointers
        int var[MAX] = {10, 100, 200};

        for (int i = 0; i < MAX; i++) {
            *var = i;    // This is a correct syntax
            //var++;       // This is incorrect.
        }
        *(var + 2) = 500;
    }
}

namespace example7 {
    void example() {
        //simple array revisted

        int var[MAX] = {10, 100, 200};

        for (int i = 0; i < MAX; i++) {
            cout << "Value of var[" << i << "] = ";
            cout << var[i] << endl;
        }
    }
}

namespace example8 {
    void example() {

        //array of pointers
        int var[MAX] = {10, 100, 200};
        //TODO 8 define an integer pointer of size MAX
        int *ptr[MAX];
        for (int i = 0; i < MAX; i++) {
            //TODO 8// assign the address of integer.
            ptr[i] = &var[i];
        }
        for (int i = 0; i < MAX; i++) {
            //TODO 8
            cout << "Value of var[" << i << "] = " << var[i] << endl;
            cout << "value of address of var[" << i << "] = " << ptr[i] << endl;
        }
    }
}

namespace example9 {
    void example() {

        //array of names

        //TODO 9 - create a character pointer array of size MAX
        char *names[MAX];
        for (int i = 0; i < MAX; i++) {
            //TODO 9
            cout << "Value of names[" << i << "] = ";
            cout << names[i] << endl;

        }
    }
}

namespace example10 {
    void example() {
        int var;
        int *ptr;
        //TODO 10 - create a pointer to pointer
        int **ptr1;

        var = 3000;

        // take the address of var
        ptr = &var;

        //TODO 10// take the address of ptr using address of operator &
        ptr1 = &ptr;


        // take the value using pptr
        cout << "Value of var :" << var << endl;
        cout << "Value available at *ptr :" << *ptr << endl;
        //TODO 10
        cout << "Value available at **pptr :";
        cout << **ptr1 << endl;
    }
}

namespace example11 {
    //passing pointers to functions
    void getSeconds(unsigned long *par);


    void getSeconds(unsigned long *par) {
        // get the current number of seconds
        *par = time(NULL);
        return;
    }

    void example() {
        unsigned long sec;


        getSeconds(&sec);

        // print the actual value
        cout << "Number of seconds :" << sec << endl;

    }
}

namespace example12 {
    //More passing pointers to functions
    double getAverage(int *arr, int size);


    double getAverage(int *arr, int size) {
        int i, sum = 0;
        double avg;

        for (i = 0; i < size; ++i) {
            sum += arr[i];
        }

        avg = double(sum) / size;

        return avg;
    }

    void example() {

        // an int array with 5 elements.
        int balance[5] = {1000, 2, 3, 17, 50};
        double avg;

        // pass pointer to the array as an argument.
        avg = getAverage(balance, 5);

        // output the returned value
        cout << "Average value is: " << avg << endl;

    }
}

namespace example13 {
    //returning pointers from function

    // function to generate and retrun random numbers.
    int *getRandom() {
        static int r[10];

        // set the seed
        srand((unsigned) time(NULL));
        for (int i = 0; i < 10; ++i) {
            r[i] = rand();
            cout << r[i] << endl;
        }

        return r;
    }

    // function to call above defined function.

    void example() {
        // a pointer to an int.
        int *p;

        p = getRandom();
        for (int i = 0; i < 10; i++) {
            cout << "*(p + " << i << ") : ";
            cout << *(p + i) << endl;
        }


    }
}


int main() {

    //example1::example();
    //example2::example();
    //example3::example();
    //example4::example();
    //example5::example();
    //example6::example();
    //example7::example();
<<<<<<< HEAD
    //example8::example();
    example9::example();
=======
    example8::example();
    //example9::example();
>>>>>>> origin/master
    //example10::example();
    //example11::example();
    //example12::example();
    //example13::example();


    return 0;
}