prog_name=$1
g++ -std=c++11 $prog_name.cpp -o $prog_name.out
mv $prog_name.out ./executables/
./executables/$prog_name.out