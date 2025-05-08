g++ -std=c++20 -o no_err no_err.cpp &&
echo "no_err compiled." &&
g++ -std=c++20 -o err err.cpp &&
echo "err compiled." # This should not happen.
