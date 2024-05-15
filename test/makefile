all: clean add

generateCompile: tests.cpp ../student.cpp
			g++ -Wall --std=c++17 tests.cpp catch_amalgamated.cpp -o checkFunc

add: generateCompile
	./checkFunc [add]

mult: generateCompile
	./checkFunc [mult]

clean:
	rm -f checkFunc