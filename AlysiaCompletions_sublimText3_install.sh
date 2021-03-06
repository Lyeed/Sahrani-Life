#!/bin/bash
# writen by Lyeed
# /!\ Must be launch in the same folder as Alysia.sublime-completions & CBA.sublime-completions /!\

if [ ! -d "$APPDATA\Sublime Text 3" ]; then
	read -p "Error: Can't find SublimText 3 folder in $APPDATA. Press 'ENTER' to exit"
	exit 1
fi

if [ ! -d "$APPDATA\Sublime Text 3\Packages\User" ]; then
	read -p "Error: Can't find User folder in $APPDATA/Sublime Text 3. Press 'ENTER' to exit"
	exit 1
fi

cp "Alysia.sublime-completions" "$APPDATA\Sublime Text 3\Packages\User"
cp "CBA.sublime-completions" "$APPDATA\Sublime Text 3\Packages\User"

exit 0
