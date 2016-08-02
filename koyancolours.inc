#ifndef (INDEXOFREFRACTION)
        #declare INDEXOFREFRACTION = 1.52;
#end

#include "lg_color_N06.inc"
#declare Color0 = material { texture {lg_color_N06} }
#declare Color0_slope = material { texture {lg_color_N06 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_B00.inc"
#declare Color1 = material { texture {lg_color_B00} }
#declare Color1_slope = material { texture {lg_color_B00 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_GC03.inc"
#declare Color2 = material { texture {lg_color_GC03} }
#declare Color2_slope = material { texture {lg_color_GC03 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_C02.inc"
#declare Color3 = material { texture {lg_color_C02} }
#declare Color3_slope = material { texture {lg_color_C02 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_R00.inc"
#declare Color4 = material { texture {lg_color_R00} }
#declare Color4_slope = material { texture {lg_color_R00 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_RM00.inc"
#declare Color5 = material { texture {lg_color_RM00} }
#declare Color5_slope = material { texture {lg_color_RM00 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_OR05.inc"
#declare Color6 = material { texture {lg_color_OR05} }
#declare Color6_slope = material { texture {lg_color_OR05 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_N10.inc"
#declare Color7 = material { texture {lg_color_N10} }
#declare Color7_slope = material { texture {lg_color_N10 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_NW02.inc"
#declare Color8 = material { texture {lg_color_NW02} }
#declare Color8_slope = material { texture {lg_color_NW02 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_BC20.inc"
#declare Color9 = material { texture {lg_color_BC20} }
#declare Color9_slope = material { texture {lg_color_BC20 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_G00.inc"
#declare Color10 = material { texture {lg_color_G00} }
#declare Color10_slope = material { texture {lg_color_G00 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_C00.inc"
#declare Color11 = material { texture {lg_color_C00} }
#declare Color11_slope = material { texture {lg_color_C00 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_RO20.inc"
#declare Color12 = material { texture {lg_color_RO20} }
#declare Color12_slope = material { texture {lg_color_RO20 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_RM40.inc"
#declare Color13 = material { texture {lg_color_RM40} }
#declare Color13_slope = material { texture {lg_color_RM40 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_Y00.inc"
#declare Color14 = material { texture {lg_color_Y00} }
#declare Color14_slope = material { texture {lg_color_Y00 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_N60.inc"
#declare Color15 = material { texture {lg_color_N60} }
#declare Color15_slope = material { texture {lg_color_N60 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_G20.inc"
#declare Color17 = material { texture {lg_color_G20} }
#declare Color17_slope = material { texture {lg_color_G20 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_Y20.inc"
#declare Color18 = material { texture {lg_color_Y20} }
#declare Color18_slope = material { texture {lg_color_Y20 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_OY31.inc"
#declare Color19 = material { texture {lg_color_OY31} }
#declare Color19_slope = material { texture {lg_color_OY31 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_VB40.inc"
#declare Color20 = material { texture {lg_color_VB40} }
#declare Color20_slope = material { texture {lg_color_VB40 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_GY50p.inc"
#declare Color21 = material { texture {lg_color_GY50p} }
#declare Color21_slope = material { texture {lg_color_GY50p normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_M02.inc"
#declare Color22 = material { texture {lg_color_M02} }
#declare Color22_slope = material { texture {lg_color_M02 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_VB03.inc"
#declare Color23 = material { texture {lg_color_VB03} }
#declare Color23_slope = material { texture {lg_color_VB03 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_O00.inc"
#declare Color25 = material { texture {lg_color_O00} }
#declare Color25_slope = material { texture {lg_color_O00 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_MR04.inc"
#declare Color26 = material { texture {lg_color_MR04} }
#declare Color26_slope = material { texture {lg_color_MR04 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_YG00.inc"
#declare Color27 = material { texture {lg_color_YG00} }
#declare Color27_slope = material { texture {lg_color_YG00 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_OY02.inc"
#declare Color28 = material { texture {lg_color_OY02} }
#declare Color28_slope = material { texture {lg_color_OY02 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_smoke.inc"
#declare Color32 = material { texture {lg_color_smoke} interior { ior INDEXOFREFRACTION } }
#declare Color32_slope = material { texture {lg_color_smoke normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_B00t.inc"
#declare Color33 = material { texture {lg_color_B00t} interior { ior INDEXOFREFRACTION } }
#declare Color33_slope = material { texture {lg_color_B00t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_G00t.inc"
#declare Color34 = material { texture {lg_color_G00t} interior { ior INDEXOFREFRACTION } }
#declare Color34_slope = material { texture {lg_color_G00t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_R00t.inc"
#declare Color36 = material { texture {lg_color_R00t} interior { ior INDEXOFREFRACTION } }
#declare Color36_slope = material { texture {lg_color_R00t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_VM00t.inc"
#declare Color37 = material { texture {lg_color_VM00t} interior { ior INDEXOFREFRACTION } }
#declare Color37_slope = material { texture {lg_color_VM00t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_N51t.inc"
#declare Color39 = material { texture {lg_color_N51t} interior { ior INDEXOFREFRACTION } }
#declare Color39_slope = material { texture {lg_color_N51t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_N00t.inc"
#declare Color40 = material { texture {lg_color_N00t} interior { ior INDEXOFREFRACTION } }
#declare Color40_slope = material { texture {lg_color_N00t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_CB40t.inc"
#declare Color41 = material { texture {lg_color_CB40t} interior { ior INDEXOFREFRACTION } }
#declare Color41_slope = material { texture {lg_color_CB40t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_YG00tf.inc"
#declare Color42 = material { texture {lg_color_YG00tf} interior { ior INDEXOFREFRACTION } }
#declare Color42_slope = material { texture {lg_color_YG00tf normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_MR00t.inc"
#declare Color45 = material { texture {lg_color_MR00t} interior { ior INDEXOFREFRACTION } }
#declare Color45_slope = material { texture {lg_color_MR00t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_Y00t.inc"
#declare Color46 = material { texture {lg_color_Y00t} interior { ior INDEXOFREFRACTION } }
#declare Color46_slope = material { texture {lg_color_Y00t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_N60t.inc"
#declare Color47 = material { texture {lg_color_N60t} interior { ior INDEXOFREFRACTION } }
#declare Color47_slope = material { texture {lg_color_N60t normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_OR00tf.inc"
#declare Color57 = material { texture {lg_color_OR00tf} interior { ior INDEXOFREFRACTION } }
#declare Color57_slope = material { texture {lg_color_OR00tf normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_redbrown.inc"
#declare Color70 = material { texture {lg_color_redbrown} }
#declare Color70_slope = material { texture {lg_color_redbrown normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_mediumstone.inc"
#declare Color71 = material { texture {lg_color_mediumstone} }
#declare Color71_slope = material { texture {lg_color_mediumstone normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_darkstone.inc"
#declare Color72 = material { texture {lg_color_darkstone} }
#declare Color72_slope = material { texture {lg_color_darkstone normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_N60mi.inc"
#declare Color135 = material { texture {lg_color_N60mi} }
#declare Color135_slope = material { texture {lg_color_N60mi normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_YO20mi.inc"
#declare Color142 = material { texture {lg_color_YO20mi} }
#declare Color142_slope = material { texture {lg_color_YO20mi normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_blackrubber"
#declare Color256 = material { texture {lg_color_blackrubber} }
#declare Color256_slope = material { texture {lg_color_blackrubber normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_B03.inc"
#declare Color272 = material { texture {lg_color_B03} }
#declare Color272_slope = material { texture {lg_color_B03 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_bluerubber"
#declare Color273 = material { texture {lg_color_bluerubber} }
#declare Color273_slope = material { texture {lg_color_bluerubber normal { bumps 1 scale 25*0.02 }}} 

#declare Color288 = material { texture {lg_color_GC03} }
#declare Color288_slope = material { texture {lg_color_GC03 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_R04.inc"
#declare Color320 = material { texture {lg_color_R04} }
#declare Color320_slope = material { texture {lg_color_R04 normal { bumps 1 scale 25*0.02 }}} 

#declare Color323 = material { texture {lg_color_R04} }
#declare Color323_slope = material { texture {lg_color_R04 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_redrubber"
#declare Color324 = material { texture {lg_color_redrubber} }
#declare Color324_slope = material { texture {lg_color_redrubber normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_OR03.inc"
#declare Color328 = material { texture {lg_color_OR03} }
#declare Color328_slope = material { texture {lg_color_OR03 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_BV11.inc"
#declare Color331 = material { texture {lg_color_BV11} }
#declare Color331_slope = material { texture {lg_color_BV11 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_YO20mc.inc"
#declare Color334 = material { texture {lg_color_YO20mc} }
#declare Color334_slope = material { texture {lg_color_YO20mc normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_R22.inc"
#declare Color335 = material { texture {lg_color_R22} }
#declare Color335_slope = material { texture {lg_color_R22 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_BC20mc.inc"
#declare Color361 = material { texture {lg_color_BC20mc} }
#declare Color361_slope = material { texture {lg_color_BC20mc normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_YO02md.inc"
#declare Color366 = material { texture {lg_color_YO02md} }
#declare Color366_slope = material { texture {lg_color_YO02md normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_BV12mi.inc"
#declare Color369 = material { texture {lg_color_BV12mi} }
#declare Color369_slope = material { texture {lg_color_BV12mi normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_V22.inc"
#declare Color373 = material { texture {lg_color_V22} }
#declare Color373_slope = material { texture {lg_color_V22 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_N10mi.inc"
#declare Color374 = material { texture {lg_color_N10mi} }
#declare Color374_slope = material { texture {lg_color_N10mi normal { bumps 1 scale 25*0.02 }}} 
     
#include "lg_color_grayrubber"
#declare Color375 = material { texture {lg_color_grayrubber} }
#declare Color375_slope = material { texture {lg_color_grayrubber normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_GC22.inc"
#declare Color378 = material { texture {lg_color_GC22} }
#declare Color378_slope = material { texture {lg_color_GC22 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_BC22.inc"
#declare Color379 = material { texture {lg_color_BC22} }
#declare Color379_slope = material { texture {lg_color_BC22 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_OY00.inc"
#declare Color382 = material { texture {lg_color_OY00} }
#declare Color382_slope = material { texture {lg_color_OY00 normal { bumps 1 scale 25*0.02 }}} 
     
#include "lg_color_N00mc.inc"
#declare Color383 = material { texture {lg_color_N00mc} }
#declare Color383_slope = material { texture {lg_color_N00mc normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_OR04.inc"
#declare Color388 = material { texture {lg_color_OR04} }
#declare Color388_slope = material { texture {lg_color_OR04 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_OR02.inc"
#declare Color396 = material { texture {lg_color_OR02} }
#declare Color396_slope = material { texture {lg_color_OR02 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_N02md.inc"
#declare Color399 = material { texture {lg_color_N02md} }
#declare Color399_slope = material { texture {lg_color_N02md normal { bumps 1 scale 25*0.02 }}} 
     
#include "lg_color_BC40.inc"
#declare Color401 = material { texture {lg_color_BC40} }
#declare Color401_slope = material { texture {lg_color_BC40 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_YG11md.inc"
#declare Color418 = material { texture {lg_color_YG11md} }
#declare Color418_slope = material { texture {lg_color_YG11md normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_G20mc.inc"
#declare Color426 = material { texture {lg_color_G20mc} }
#declare Color426_slope = material { texture {lg_color_G20mc normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_G40.inc"
#declare Color431 = material { texture {lg_color_G40} }
#declare Color431_slope = material { texture {lg_color_G40 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_RO02.inc"
#declare Color448 = material { texture {lg_color_RO02} }
#declare Color448_slope = material { texture {lg_color_RO02 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_OY20mc.inc"
#declare Color450 = material { texture {lg_color_OY20mc} }
#declare Color450_slope = material { texture {lg_color_OY20mc normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_R20.inc"
#declare Color455 = material { texture {lg_color_R20} }
#declare Color455_slope = material { texture {lg_color_R20 normal { bumps 1 scale 25*0.02 }}}
                 
#include "lg_color_YG12.inc"
#declare Color458 = material { texture {lg_color_YG12} }
#declare Color458_slope = material { texture {lg_color_YG12 normal { bumps 1 scale 25*0.02 }}} 
                 
#include "lg_color_O30.inc"
#declare Color462 = material { texture {lg_color_O30} }
#declare Color462_slope = material { texture {lg_color_O30 normal { bumps 1 scale 25*0.02 }}} 
                 
#include "lg_color_VM00tg.inc"
#declare Color465 = material { texture {lg_color_VM00tg} interior { ior INDEXOFREFRACTION } }
#declare Color465_slope = material { texture {lg_color_VM00tg normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 
                 
#include "lg_color_YG40.inc"
#declare Color474 = material { texture {lg_color_YG40} }
#declare Color474_slope = material { texture {lg_color_YG40 normal { bumps 1 scale 25*0.02 }}} 
                 
#include "lg_color_O02.inc"
#declare Color484 = material { texture {lg_color_O02} }
#declare Color484_slope = material { texture {lg_color_O02 normal { bumps 1 scale 25*0.02 }}} 
                 
#include "lg_color_YG20.inc"
#declare Color491 = material { texture {lg_color_YG20} }
#declare Color491_slope = material { texture {lg_color_YG20 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_YO20.inc"
#declare Color494 = material { texture {lg_color_YO20} }
#declare Color494_slope = material { texture {lg_color_YO20 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_Y40.inc"
#declare Color495 = material { texture {lg_color_Y40} }
#declare Color495_slope = material { texture {lg_color_Y40 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_RO40.inc"
#declare Color501 = material { texture {lg_color_RO40} }
#declare Color501_slope = material { texture {lg_color_RO40 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_NW30.inc"
#declare Color503 = material { texture {lg_color_NW30} }
#declare Color503_slope = material { texture {lg_color_NW30 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_silverrubber.inc"
#declare Color502 = material { texture {lg_color_silverrubber} }
#declare Color502_slope = material { texture {lg_color_silverrubber normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_N60z.inc"
#declare Color504 = material { texture {lg_color_N60z} interior { ior INDEXOFREFRACTION } }
#declare Color504_slope = material { texture {lg_color_N60z normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_CB10.inc"
#declare Color505 = material { texture {lg_color_CB10} }
#declare Color505_slope = material { texture {lg_color_CB10 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_C20.inc"
#declare Color507 = material { texture {lg_color_C20} }
#declare Color507_slope = material { texture {lg_color_C20 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_MR00tg.inc"
#declare Color508 = material { texture {lg_color_MR00tg} interior { ior INDEXOFREFRACTION } }
#declare Color508_slope = material { texture {lg_color_MR00tg normal { bumps 1 scale 25*0.02 }} interior { ior INDEXOFREFRACTION } } 

#include "lg_color_R40.inc"
#declare Color509 = material { texture {lg_color_R40} }
#declare Color509_slope = material { texture {lg_color_R40 normal { bumps 1 scale 25*0.02 }}}

#include "lg_color_YO40.inc"
#declare Color510 = material { texture {lg_color_YO40} }
#declare Color510_slope = material { texture {lg_color_YO40 normal { bumps 1 scale 25*0.02 }}} 

#include "lg_color_whiterubber.inc"
#declare Color511 = material { texture {lg_color_whiterubber} }
#declare Color511_slope = material { texture {lg_color_whiterubber normal { bumps 1 scale 25*0.02 }}} 
