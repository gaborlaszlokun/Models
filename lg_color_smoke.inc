

#declare lg_color_smoke = texture {
   pigment { rgbft <0, 0, 0, .1, .9> }
//   pigment { rgbft <0.333333333333333, 0.309259259259259, 0.266666666666667, 0.3, 0.7> }
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

