

#declare lg_color_darkstone = texture {
//   pigment { rgbft <.176923076925, .1730662395, .2133333336, 0, 0> }
   pigment { rgbft <1.1*.176923076925, 1.1*.1730662395, 1.1*.2133333336, 0, 0> }
   normal { bumps .01 scale .10 turbulence 0  }
   finish {
      ambient .0
      diffuse 1
      brilliance 1
      phong 1 phong_size 40
      specular 1
      reflection { .05 falloff 1 exponent 1 }
      conserve_energy
  }
};

