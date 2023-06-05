#!/bin/bash

#while-menu: a menu driven system information progdram

DELAY=3 #Number of seconds to display results

while [[ $REPLY != 0 ]]; do
	clear
	
	cat <<- _EOF_

		Please Select: 

		1. Display System Information
		2. Display Disk Space
		3. Display Home Space Utilization
		0. Quit
	
	_EOF_

	read -p "Enter Selection [0-3] >"

	if [[ $REPLY =~ ^[0-3]$ ]]; then

		if [[ $REPLY == 1 ]]; then
			echo "-----Displaying System informaton--------
			Hostname: $HOSTNAME"

			uptime
			sleep $DELAY
		fi

		if [[ $REPLY == 2 ]]; then
			echo "-------Displaying Disk space--------"
			df -h
			sleep $DELAY
		fi

		if [[ $REPLY == 3 ]]; then
			echo "------Displaying Home Space Utilization------"

			if [[ $(id -u) -eq 0 ]]; then
				echo "Home Space Utilization (ALL USERS)"
				du -sh /home/*
			else
				echo "Home Space Utilization ($USER)"
				du -sh $HOME
			fi
			sleep $DELAY
		fi
	else
		echo "Invalid entry"
		sleep $DELAY
	fi
done
echo "Program Terminated":
