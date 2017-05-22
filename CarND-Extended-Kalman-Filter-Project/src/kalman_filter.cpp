#include "kalman_filter.h"

using Eigen::MatrixXd;
using Eigen::VectorXd;

KalmanFilter::KalmanFilter() {}

KalmanFilter::~KalmanFilter() {}

void KalmanFilter::Init(VectorXd &x_in, MatrixXd &P_in, MatrixXd &F_in,
                        MatrixXd &H_in, MatrixXd &R_in, MatrixXd &Q_in) {
  x_ = x_in;
  P_ = P_in;
  F_ = F_in;
  H_ = H_in;
  R_ = R_in;
  Q_ = Q_in;
}

void KalmanFilter::Predict() {
  /**
  TODO:
    * predict the state
  */
  x_ = (F_*x_); // u = 0
  P_=F_*P_*F_.transpose() + Q_;
}

void KalmanFilter::Update(const VectorXd &z) {
  /**
  TODO:
    * update the state by using Kalman Filter equations
  */

  // KF Measurement update step
  VectorXd y_ = z - H_*x_;
  VectorXd S_ = H_*P_*H_.transpose() + R_;
  VectorXd K_ = P_*H_.transpose() * S.inverse();
  

  MatrixXd I = MatrixXd::Identity(P_.size(), P.size());
  // new state
  x_ = x_ + (K_*y_);
  P_ = (I - (K_*H_))*P_;


}

void KalmanFilter::UpdateEKF(const VectorXd &z) {
  /**
  TODO:
    * update the state by using Extended Kalman Filter equations
  */
}
