#!/bin/bash

#read-menu: a menu driven system information program

cat <<- _EOF_
	
	Please select an option:

	1. Display System Information
	2. Display Disk Space
	3. Display Home Space Utilization
	0. Quit

	_EOF_

	read -p "Enter selection [0-3] > "

	if [[ $REPLY =~ ^[0-3]$ ]]; then
		
		if [[ $REPLY == 0 ]]; then
			echo "Program terminated."
			exit
		fi
		
		if [[ $REPLY == 1 ]]; then
			echo "-----Displaying System information------"
			echo "Hostname: $HOSTNAME"
			uptime
			exit
		fi
		
		if [[ $REPLY == 2 ]]; then
			echo "-------Displaying Disk Space-------"
			df -h
			exit
		fi

		if [[ $REPLY == 3 ]]; then
			echo "-------Displaying Home Space Utilization-----"

			if [[ $(id -u) -eq 0 ]]; then
				echo "Home space Utilization (All Users)"
				du -sh /home/*
			else
				echo "Home Space Utilization ($USERS)"
				du -sh $HOME
			fi
			exit
		fi
	else
		echo "Invalid entry." >&2
		exit 1
	fi
