xlength 	= 2;
ylength 	= 2;
width 		= 0.2;
radius 		= 0.04;

// Decrease this to have a finer mesh in the x-y plane:
lc = 0.02;

Point(1) = {-xlength/2, -width/2, 0, lc};
Point(2) = {xlength/2, -width/2, 0, lc};
Point(3) = {xlength/2, width/2, 0, lc};
Point(4) = {-xlength/2, width/2, 0, lc};
Point(5) = {-width/2, -ylength/2, 0, lc};
Point(6) = {width/2, -ylength/2, 0, lc};
Point(7) = {width/2, ylength/2, 0, lc};
Point(8) = {-width/2, ylength/2, 0, lc};
Point(9) = {-width/2, -width/2, 0, lc};
Point(10) = {width/2, -width/2, 0, lc};
Point(11) = {width/2, width/2, 0, lc};
Point(12) = {-width/2, width/2, 0, lc};
Point(13) = {-radius*0.70710678, -radius*0.70710678, 0, lc};
Point(14) = {radius*0.70710678, -radius*0.70710678, 0, lc};
Point(15) = {radius*0.70710678, radius*0.70710678, 0, lc};
Point(16) = {-radius*0.70710678, radius*0.70710678, 0, lc};
Point(17) = {0, 0, 0, lc};

Line(1) = {4, 1};
Line(2) = {1, 9};
Line(3) = {9, 5};
Line(4) = {5, 6};
Line(5) = {6, 10};
Line(6) = {10, 2};
Line(7) = {2, 3};
Line(8) = {3, 11};
Line(9) = {11, 7};
Line(10) = {7, 8};
Line(11) = {8, 12};
Line(12) = {12, 4};
Line(13) = {9, 10};
Line(14) = {10, 11};
Line(15) = {11, 12};
Line(16) = {12, 9};
Line(17) = {9, 13};
Line(18) = {10, 14};
Line(19) = {11, 15};
Line(20) = {12, 16};
Circle(21) = {13, 17, 16};
Circle(22) = {16, 17, 15};
Circle(23) = {15, 17, 14};
Circle(24) = {14, 17, 13};

Line Loop(25) = {2, -16, 12, 1};
Plane Surface(26) = {25};
Line Loop(27) = {3, 4, 5, -13};
Plane Surface(28) = {27};
Line Loop(29) = {6, 7, 8, -14};
Plane Surface(30) = {29};
Line Loop(31) = {15, -11, -10, -9};
Plane Surface(32) = {31};
Line Loop(33) = {15, 20, 22, -19};
Plane Surface(34) = {33};
Line Loop(35) = {23, -18, 14, 19};
Plane Surface(36) = {35};
Line Loop(37) = {18, 24, -17, 13};
Plane Surface(38) = {37};
Line Loop(39) = {21, -20, 16, 17};
Plane Surface(40) = {39};
Line Loop(41) = {24, 21, 22, 23};
Plane Surface(42) = {41};

Recombine Surface(26);
Recombine Surface(28);
Recombine Surface(30);
Recombine Surface(32);
Recombine Surface(34);
Recombine Surface(36);
Recombine Surface(38);
Recombine Surface(40);
Recombine Surface(42);

Physical Line(1) = {1};
Physical Line(2) = {12, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 21, 24, 23, 22};
Physical Surface(3) = {26, 32, 30, 28, 38, 36, 34, 40};
