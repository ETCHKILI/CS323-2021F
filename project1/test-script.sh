make
for i in {1..12}
do
if (($i < 10))
then
./bin/splc checker/test_1_r0$i.spl
else
./bin/splc checker/test_1_r$i.spl
fi
done


# for i in {1..12}
# do
# if (($i < 10))
# then
# cp test/test_1_r0$i.spl checker
# else
# cp test/test_1_r$i.spl checker
# fi
# done
