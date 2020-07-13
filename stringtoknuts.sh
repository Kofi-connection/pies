#!/bin/bash
awk '{
sign ="";
if (substr($0,1,1)=="-")
 {sign="-"};
gsub("-","",$0);
split($0,k,"/");
knuts=k[1]*23*17 + k[2]*17 +k[3];
if (sign!= "-")
 print knuts;
else 
 print -knuts;

}'

