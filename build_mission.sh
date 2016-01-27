#!/bin/bash
# writen by Lyeed
# /!\ Must be launch from the directory which contains $GIT_DIRECTORY /!\

PBO_EXE='G:\Logiciels\PBO Manager\PBOConsole.exe'
RAPIFY_EXE='C:\Program Files (x86)\Mikero\DePboTools\bin\Rapify.exe'
APP_DATA_DIRECTORY='C:\Users\lyeed\AppData\Local\Arma 3\MPMissionsCache'
GIT_DIRECTORY='Alysia-Sahrani-Life'
MISSION_DIRECTORY='Alysia_client.Sibranak'
BACKUP_DIRECTORY='G:\Documents\Projets\ArmA 3\last\backups'

if [ ! -d "$GIT_DIRECTORY" ]; then
	read -p "Error: folder $GIT_DIRECTORY does not exists. Press 'ENTER' to exit"
	exit 1
fi

if [ -d "$MISSION_DIRECTORY" ]; then
	rm -rf "$MISSION_DIRECTORY"
fi

echo "[BUILD_MISSION] Copying file ..."
cp -r "$GIT_DIRECTORY" "$MISSION_DIRECTORY"

echo "[BUILD_MISSION] Removing developpement files and folders ..."
for TARGET in "$MISSION_DIRECTORY/.git" "$MISSION_DIRECTORY/.gitattributes" "$MISSION_DIRECTORY/.gitignore" "$MISSION_DIRECTORY/dev.sqf" "$MISSION_DIRECTORY/AlysiaCompletions_sublimText3_install.sh" "$MISSION_DIRECTORY/AlysiaCompletions_sublimText3_install.sh" "$MISSION_DIRECTORY/Alysia.sublime-completions" "$MISSION_DIRECTORY/build_mission.sh" "$MISSION_DIRECTORY/CBA.sublime-completions"
do
	echo "Removing $TARGET"
	rm -rf $TARGET
done

if [ "$RAPIFY_EXE" != "" ]; then
	echo "[BUILD_MISSION] Binarizing mission.sqm ..."
	"$RAPIFY_EXE" -A -N "$MISSION_DIRECTORY/mission.sqm" "$MISSION_DIRECTORY/mission.bin"
	rm -rf "$MISSION_DIRECTORY/mission.sqm"
	mv "$MISSION_DIRECTORY/mission.bin" "$MISSION_DIRECTORY/mission.sqm"

	echo "[BUILD_MISSION] Compiling description.ext ..."
	"$RAPIFY_EXE" -L -A -N "$MISSION_DIRECTORY/description.ext"
fi

echo "[BUILD_MISSION] Pbo Packing..."
"$PBO_EXE" -pack "$(pwd)/$MISSION_DIRECTORY" "$(pwd)/$MISSION_DIRECTORY.pbo"
if [ -f "$MISSION_DIRECTORY.pbo.bak" ]; then
	echo "Moving .bak to backup folder ..."
	mv "$MISSION_DIRECTORY.pbo.bak" "$BACKUP_DIRECTORY"
fi

echo "[BUILD_MISSION] Removing tmp folder ..."
rm -rf "$MISSION_DIRECTORY"

echo "[BUILD_MISSION] Copying new mission to MpMissionsCache ..."
cp "$MISSION_DIRECTORY.pbo" "$APP_DATA_DIRECTORY"

exit 0
