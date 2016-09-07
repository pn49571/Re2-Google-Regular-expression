#ifndef COPY_H
#define COPY_H

class Math {
 public:
  int pi() const;
  void pi(int pi);
 private:
  int _pi;
};

double cube(double x);
char regular(const char* regex, const char* pattern);
char regular1(const char* pattern);
char regular2(const char* str);   
#endif
