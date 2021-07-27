#include "PID.h"
#include <iostream>

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */

  Kp = Kp_;
  Kd = Kd_;
  Ki = Ki_;

  p_error = 0;
  d_error = 0;
  i_error = 0;
}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  double dt = 1;

  d_error = (cte - p_error) / dt;
  p_error = cte;
  i_error += (cte * dt);
}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  return (Kp * p_error + Kd * d_error + Ki * i_error);  // TODO: Add your total error calc here!
}

void PID::UpdateP(int index, double amount) {
  if (index == 0) {
    Kp += amount;
  } else if (index == 1) {
    Ki += amount;
  } else if (index == 2) {
    Kd += amount;
  } else {
    std::cout << "out of bounds" << std::endl;
  }
}
