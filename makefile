CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: main

main: main.o AutomacaoSala.o Televisao.o ArCondicionado.o Iluminacao.o
	$(CXX) $(CXXFLAGS) $^ -o $@

main.o: main.cpp AutomacaoSala.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

AutomacaoSala.o: AutomacaoSala.cpp AutomacaoSala.hpp Iluminacao.hpp ArCondicionado.hpp Televisao.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Televisao.o: Televisao.cpp Televisao.hpp Dispositivo.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

ArCondicionado.o: ArCondicionado.cpp ArCondicionado.hpp Dispositivo.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

Iluminacao.o: Iluminacao.cpp Iluminacao.hpp Dispositivo.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o main