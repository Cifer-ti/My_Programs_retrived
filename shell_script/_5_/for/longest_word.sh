#!/bin/bash

#longes_word: find the longest word in a file

num_args=$#
present_args=1

while [[ $present_args -le $num_args ]]; do
	if [[ -r ${!present_args} ]]; then
		max_len=0
		max_word=

		for i in $(strings ${!present_args}); do
			len=$(echo $i | wc -c)

			if (( len > max_len )); then
				max_len=$len
				max_word=$i
			fi
		done

		echo "${!present_args}: '$max_word' ($max_len charaters)"
	fi
	present_args=$(($present_args + 1))
done
