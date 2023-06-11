#!/bin/bash

#case-menu: a menu driven system information page

clear
echo "

Please select:

1. Display System Information
2. Display Disk Space
3. Display Home Space Utilization
Q. Quit "

read -p "Enter Selection [1-3], Q > "

case $REPLY in

	q|Q) 	echo "Program terminated."
		exit
		;;

	1) 	echo "Hostname: $HOSTNAME"
		exit
		;;

	2) 	df -h
	 	;;

   	3) 	if [[ $(id -u) -eq 0 ]]; then
			echo "Home space utilization (ALL Users)"
			du -sh /home/*
	   	else
			echo "Home Space utilization ($USER)"
			du -sh $HOME
	        fi
		;;

	*)	echo "Inavelid entry" >&2
		exit 1
		;;
esac
