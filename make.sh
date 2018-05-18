g++ -shared -o liba.so -fvisibility=hidden -std=c++11 a.cc
g++ -shared -o libb.so -fvisibility=hidden -std=c++11 b.cc
g++ -L. -la -lb -o main main.cc
