# Re2-Google-Regular-expression

Re2 google regular expression is now the fastest available regualar expression making the application really fast in identifying and extracting the patterns of text. 

#### Codes: 
This repository holds my research findings and implementation of Re2 in C++ and Tcl programming languages.
To make Re2 available in Tcl language , I used a swig wrapper to make c++ extensions and converted it into a shared object file which can be imported into Tcl to use Re2.  

The files section holds sample codes to create Re2 wrapper for Tcl.
                        - copy.cpp ----- C++ extension
                        - copy.h  ------ C++ header file
                        - copy.swig ------ swig interface file
                    
                    
                    
#### Compile:
Compilation methods and its options will vary in diffrent systems

swig -c++ -tcl copy.swig  -----------------compile swig to generate c++ wrapper file

gcc -c -std=c++11 -fPIC copy_wrap.cxx  --------------------- create object file in for c++ wrapper file
-I/usr/include/tcl8.6 -pthread 
-L/usr/local/lib -lre2

gcc -c -std=c++11 -fPIC copy.cpp     ----------------------- create object file in for c++ file
-I/usr/include/tcl8.6 
-pthread -L/usr/local/lib -lre2

g++ -shared copy.o copy_wrap.o -o copy.so   ---------------- link the 2 object files that is created above to make a shared                                                                object file 
-I/usr/include/tcl8.6 -pthread 
-L/usr/local/lib -lre2




