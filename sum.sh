#!/bin/bash
awk 'BEGIN{
if (substr($0,1,1)!="")
 sum+=$0;
print sum;

}'

