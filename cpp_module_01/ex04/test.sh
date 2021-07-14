_YELLOW="\e[38;5;184m"
_GREEN="\e[38;5;46m"
_RESET="\e[0m"
_INFO="[$(_YELLOW)INFO$(_RESET)]"
_SUCCESS="[$(_GREEN)SUCCESS$(_RESET)]"

rm ./sample_files/*.replace ./sample_files/*.sed error.log 2> /dev/null

printf "$_INFO Recompiling executable...\n"
make

FILES="./sample_files/*"
S1="42"
S2="678"
for f in $FILES
do
	printf "$_INFO Testing... $f\n"
	./replace $f $S1 $S2
	sed 's/$S1/$S2/g' $f > $f".sed"
	printf "Test $f $S1 $S2:\n" >> error.log
	diff $f".sed" $f".replace" >> error.log
done
