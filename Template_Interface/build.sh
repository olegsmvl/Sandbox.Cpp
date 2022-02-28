rm -r output
mkdir output
g++ -std=c++11 app.cpp -pthread -o output/app 
output/app