#include "copy.h"
#include <iostream>
#include <string>
#include <re2/re2.h>
#include <vector>

int Math::pi() const {
  return this->_pi;
}  
void Math::pi(int pi) {
  this->_pi = pi;
}

double cube(double x) {
  return x * x * x;
}

char regular(const char* regex, const char* pattern)
{
  // std::string regex = "hello";
  // std::string str2 = pattern;
  if(RE2::FullMatch(regex, pattern))
    return 't';
  else
    return 'f';
  
}


char regular1(const char* pattern)
{
  if(RE2::FullMatch("saiisheretypyingstuff", pattern))
    return 't';
  else
    return 'f';
  
}


char regular2(const char* str)
{
  if(RE2::FullMatch(str, "s.*d"))
    return 't';
  else
    return 'f';
  
}
