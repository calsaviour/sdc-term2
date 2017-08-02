 **Student describes their model in detail. This includes the state, actuators and update equations.
 + The kinematic model has the vehicle's x and y coordinates, orientation angle (psi), velocity, cross 
 track error (cte) and psi error (epsi). The actuators outputs the accleration and steering angle (delta). The kinematic model
 combines the state and actuations from the previous timestamp to compute the state for the current timestep based on the equations below:

[equations](./equations.png)


 **Timestep Length and Elapsed Duration (N & dt)**: *Student discusses the reasoning behind the chosen N (timestep length) and dt (elapsed duration between timesteps) values. Additionally the student details the previous values tried.*
 
+The values chosen for N and dt are 10 and 0.1, respectively. Udacity's provided office hours for the project and I followed the suggestions given. These values mean that the optimizer is considering a one-second duration in which to determine a corrective trajectory. Adjusting either N or dt (even by small amounts) often produced erratic behavior.
+
 

 **Polynomial Fitting and MPC Preprocessing**: *A polynomial is fitted to waypoints. If the student preprocesses waypoints, the vehicle state, and/or actuators prior to the MPC procedure it is described.*
 
+The waypoints are transformed to the vehicle's perspective (see main.cpp lines 106-111). This simplifies the process to fit a polynomial to the waypoints because the vehicle's x and y coordinates are now at the origin (0, 0) and the orientation angle is also zero. Also as discussed by the Q&A session provided.
+


**Model Predictive Control with Latency**: *The student implements Model Predictive Control that handles a 100 millisecond latency. Student provides details on how they deal with latency.*
 
+ To factor in real world latency that can occur while applying actuators inputs, the project's main thread is slept with 100ms before sending actuations to the simulator. To account for latency, the state (px, py, psi, v, cte, epsi) are adjusted with latency. The adjusted state are passed as arguments to the mpc.Solve method to return the adjusted actuations. The adjusted actuations are send to the simulator hence handling the 100ms latency.
