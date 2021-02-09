# cpp-warmup

Assignment 0: C++ warm-up. The purpose of this assignment is to familiarize ourselves with C++, cmake, and github.

## How to build

*Windows*

Open git bash to the directory containing this repository.

```
cpp-warmup $ mkdir build
cpp-warmup $ cd build
cpp-warmup $ cmake -G "Visual Studio 16 2019" ..
cpp-warmup $ make
```

Then open the solution file to write and test your programs.

*macOS*

Open terminal to the directory containing this repository.

```
cpp-warmup $ mkdir build
cpp-warmup $ cd build
cpp-warmup $ cmake ..
cpp-warmup $ make
cpp-warmup $ ./fizzbuzz
```

## Program 1: FizzBuzz

In the file `fizzbuzz.cpp`, implement the program FizzBuzz, described [here](https://open.kattis.com/problems/fizzbuzz). 
In case you might not be familiar with reading and writing data from the console, we've given you the following starter code.

```
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X,Y,Z;
   cin >> X;
   cin >> Y;
   cin >> N;
   
   // your code here
}
```

This program will sit and wait until you enter 3 values.

## Program 2: Circle class

Write a class, circle, that stores a radius and has the following methods

* default constructor (radius is set to 0)
* constructor taking a radius as argument
* copy constructor
* assignment operator
* output stream operator
* add operator (should add the radii of two circles together)
* accessor (e.g. getter) for radius
* mutator (e.g. setter) for radius
* method for computing and returning the area

Your class should also

* Split the class into a header and implementation file
* Define its methods as public, but data (the radius) as private

For example, running the program, `testcircle.cpp`, should give the following output.

```

```
