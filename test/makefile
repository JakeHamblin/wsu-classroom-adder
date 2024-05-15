all: clean add

generateCompile: tests.cpp ../functions.h
			g++ -Wall --std=c++17 tests.cpp catch_amalgamated.cpp -o checkFunc

prime: generateCompile
	./checkFunc [prime]

wordCount: generateCompile
	./checkFunc [wordCount]

letterCount: generateCompile
	./checkFunc [letterCount]

add: generateCompile
	./checkFunc [add]

sub: generateCompile
	./checkFunc [sub]

mult: generateCompile
	./checkFunc [mult]

div: generateCompile
	./checkFunc [div]

temp: generateCompile
	./checkFunc [temp]

arrayMin: generateCompile
	./checkFunc [arrayMin]

arrayMax: generateCompile
	./checkFunc [arrayMax]

clean:
	rm -f checkFunc