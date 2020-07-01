#!/bin/bash
awk '{
sign="";
if (substr($0,1,1)=="-")
 {sign="-"};
gsub("-","", $0);
gallons =int($0/(23*17));
rem=$0%(23*17);
sickles =int(rem/17);
knuts =rem%17;
print sign gallons"/"sickles"/"knuts;
}'

