// A quaternion is a num w/ four components, one real and three imaginary
// q = w + xi+ yj + zk
//w, x, y, z = real nums
// i, j, k -> imaginary

//Quaternion Multiplication
// i * i = j * j = k * k = -1
//i * j = k but j * i = -k
//j * k = i but k * j = -i
//k * i = j but i * k = -j
//Order matters, non-commutative

//Rotational Logic
// q = (w, x, y, z)
// -q = (-w, -x, -y, -z)
// -q same rotation as q
// q* = (w, -x, -y, -z)
// q* opposite rotation to q

//A quaternion representing a rotation is constructed as:
//q = (cos(θ/2), sin(θ/2)*x, sin(θ/2)*y, sin(θ/2)*z)
//Where θ is the angle of rotation and 
//(x, y, z) is the unit axis you're rotating around. 
//So if you want to represent a 90° rotation around the Z axis, 
//you'd compute cos(45°) for w and sin(45°) for the z component, with x and y as zero.

//qa = (cos(a/2), 0, 0, sin(a/2))
//qb = (cos(b/2), 0, sin(b/2), 0)
//qr = (cos(r/2), 0, 0, sin(r/2))

//q(i+1) ~=~ qi+ qwqi(dt/2)
//angular velocities = wx,wy,wz
//qw =(o,wx,wy,wz)
//Updated Orientation = qi+1
//previous orientation =qi
//time interval = dt

//Not normalized qtmp = qi + qwqi(dt/2)
//Normalized q(i+1) = qtmp / ||qtmp|| 
// ||q|| = sqrt(r^2 + x^2 + y^2 + z^2)
//qn = q/||q||