instructions used 
cat lab2data.txt | ./stringtoknuts.sh
cat lab2data.txt | ./stringtoknuts.sh >> tempknuts.txt
cat tempknuts.txt | ./knutstostring.sh
cat tempknuts.txt | awk 'BEGIN {sum=0} {sum +=$0} END {print sum}'
cat tempknuts.txt | awk 'BEGIN {sum=0} {sum +=$0} END {print sum}'| ./knutstostring.sh
