// This file was generated automatically -- DO NOT EDIT!

#declare lg_color_RM22t = texture {
   pigment { rgbft <0.666666666666667, 0.333333333333333, 0.444444444444444, .9, .1> }
   normal { bumps .01 scale .10 turbulence 0  }
   finish {
      ambient .1
      diffuse 1
      brilliance 1
      phong 1 phong_size 40
      specular 1
      reflection { .05 falloff 1 exponent 1 }
      ior 1.2
      conserve_energy
  }
};
