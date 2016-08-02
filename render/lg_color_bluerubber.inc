#declare lg_color_bluerubber = texture {
   pigment { rgbft <0, 0.0749999999999997, 0.9, 0, 0> }
   normal { bumps .05 scale .20 turbulence 0  }
   finish {
      ambient .0
      diffuse 1
      brilliance 1
      phong 0.1 phong_size 40
      specular 0.5
      reflection { .03 falloff 1 exponent 1 }
      ior 1.0
      conserve_energy
  }
};
