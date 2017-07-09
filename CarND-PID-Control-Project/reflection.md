## Parameter Selection for Steering Angle Only

**Proportional Constant (Kp)
- Ki and Kd set to zero
Started with 0.5 and then slowly decreasing the value and finally settled at 0.15 to achieve near equal amplitude assuming vehicle is driven on straight road.

*Differential Constant (Kd)
- Kp set to 0.15 and Ki set to zero
Set to 3 and was slowing decreased to 2.5 to achieve dampening
for overshoot due to proportional factor.

**Integral Constant (Ki)
- (Kp as 0.15 and Kd as 2.5)
Vehicle in the simulator did not seem to have a systematic bias and I therefore started with 0 and slowly increased it. Increasing the value over 0.003 increased the oscillations and therefore I settle for
0.001.

## Parameter Selection Steering angle and throttle
The throttle should be decreased if cross track error (cte) is high. So, the hyperparameters for throttle is
decreased or increased only when the rate of change of cte cross track error (cte) is high. Therefore, only Kd for
throttle is being tuned. After trial and error, I selected 10 for the Kd of the throttle pid controller.

Once the throttle controller was set, parameters are tuned again for steering controller similar to steps in previous
section and finally set the Kp, Kd and Ki to 0.3, 2.7 and 0.001 respectively.