#ifndef TWIDDLE_H
#define TWIDDLE_H

#include <vector>

class Twiddle {

public:
    void run();

private:
  std::vector<double> p;
  std::vector<double> dp;
};

#endif