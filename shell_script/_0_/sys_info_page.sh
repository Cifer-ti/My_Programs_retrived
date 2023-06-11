#!/bin/bash

# sys_info_page: Program to output a system information page

PROGNAME=$(basename $0)
TITLE="System Information Report For $HOSTNAME"
CURRENT_TIME=$(date +"%x %r %Z")
TIME_STAMP="Genrated $CURRENT_TIME, by $USER"

#definition of output functions

#outputs the system uptime
report_uptime () {
	cat <<- _EOF_

		<h2>System Uptime</h2>
		<pre>$(uptime)</pre>

		_EOF_
	return
}

