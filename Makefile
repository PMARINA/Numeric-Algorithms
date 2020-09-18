main: main.o lcm.o gcd.o power_mod.o
	g++ -g3 $^

main.o: main.cc main.h
	g++ -g3 -c $<

lcm.o: lcm.cc main.h
	g++ -g3 -c $<

gcd.o: gcd.cc main.h
	g++ -g3 -c $<

power_mod.o: power_mod.cc main.h
	g++ -g3 -c $<

