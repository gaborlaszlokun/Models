// This file was generated automatically -- DO NOT EDIT!

#declare lg_color_BV00mi = texture {
   pigment { rgbft <0.111111111111111, 0, 1, 0, 0> }
   normal { bumps .25 scale .1 turbulence 1  }
   finish {
      ambient .0
      diffuse 1
      brilliance 3
      phong 1 phong_size 10
      specular 1
      roughness .1
      irid { .2 thickness .2 turbulence .5 }
      reflection { .2,.4 metallic .25 falloff 1 exponent 1 }
      metallic .5
      conserve_energy
  }
};

