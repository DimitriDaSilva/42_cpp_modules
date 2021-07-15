_YELLOW="\e[38;5;184m"
_GREEN="\e[38;5;46m"
_RESET="\e[0m"
_INFO="[$(_YELLOW)INFO$(_RESET)]"
_SUCCESS="[$(_GREEN)SUCCESS$(_RESET)]"

rm error.log 2> /dev/null

printf "$_INFO Recompiling executable...\n"
make

FILES="./sample_files/*"
S1="42"
S2="678"
DIFF_RESULUT=""

for f in $FILES
do
	printf "$_INFO Testing... $f "
	./replace $f $S1 $S2
	sed "s/$S1/$S2/g" $f > $f".sed"
	DIFF_RESULUT=`diff $f".sed" $f".replace"`
	if [ -z "$DIFF_RESULUT" ]
	then
		printf "SUCCESS\n"
	else
		printf "FAILURE\n"
		printf "Test $f $S1 $S2:\n" >> error.log
		diff $f".sed" $f".replace" >> error.log
	fi
done

rm ./sample_files/*.replace ./sample_files/*.sed 2> /dev/null
