CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(main
	main.cpp
	combat.cpp
)

ADD_EXECUTABLE(test
	combat.cpp
	combat_tests.cpp
)

