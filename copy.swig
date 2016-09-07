%module copy
%{ 
    #define SWIG_FILE_WITH_INIT
    #include "copy.h"
    #include <iostream>
    #include <string>
    #include <re2/re2.h>
    #include <vector>
%}
%include "copy.h"
#include <iostream>
#include <string>
#include <re2/re2.h>
#include <vector>