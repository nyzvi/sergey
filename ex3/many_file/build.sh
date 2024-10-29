MAIN="main.cpp generate.cpp io.cpp sortings.cpp"
APP=example

if [ ! -f $APP ]; then rm $APP
fi

g++ $MAIN -o $APP

./$APP
