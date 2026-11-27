./top > testing/fresh.txt


if diff testing/fresh.txt testing/output.txt;
then
	echo "Testing Succeeded!"
else
	echo "Testing Failed..."
fi

