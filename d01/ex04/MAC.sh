#1/bin/bas
ifconfig -a | grep -w 'ether' | awk '{print $2}'
