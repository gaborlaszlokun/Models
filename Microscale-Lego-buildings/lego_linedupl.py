# -*- coding: utf-8 -*-
"""
Created on Sun Aug 21 15:00:55 2016

@author: ASUS
"""

filename = "borondos.ldr"

text = open(filename, "r")
lego = text.read()
text.close()

legoList = lego.split("\n")

print len(legoList)
print len(list(set(legoList)))

final = ""

for i in legoList:
    final += i + "\n"

text = open(filename, "w")
text.write(final)
text.close()