"""      
# -*- coding: utf-8 -*-
@author: ASUS
Created on Sun Aug 21 15:00:55 2016
"""

import os 
for filename in os.listdir(os.curdir):
    if ".ldr" in filename:
        text = open(filename, "r")
        lego = text.read()
        text.close()
        legoList = lego.split("\n")
        if len(legoList) != len(list(set(legoList))):
            final = ""
            legoList = sorted(list(set(legoList))) 
            for line in legoList:
                if line != "":
                   final += line + "\n"    
       
            print len(legoList), len(list(set(legoList)))
            text = open(filename, "w")
            text.write(final)
            text.close()
        print filename, len(legoList)