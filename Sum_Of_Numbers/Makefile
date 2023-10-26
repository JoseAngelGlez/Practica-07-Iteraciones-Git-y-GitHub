#Makefile Jose Angel Gonzalez Alamo 13/12/2022

CXX = g++
CXXFLAGS = -Wall -std=c++17 -pedantic
######################################
files = *cc
puntoh = *h
######################################
all: programa

programa: $(files)
	@echo "🚧  Compilando programa..."
	@echo "🚧  g++ -Wall -std=c++17 -pedantic $(files) $(puntoh) -o Sum_Of_Numbers"
	@$(CXX) $(CXXFLAGS) -o Sum_Of_Numbers $(files)
	@echo "✅  Programa listo para ejecución!"

######################################
.PHONY: clean
######################################
clean:
	@echo "🧹 Limpiando el directorio..."
	@rm -rf *.o *.out *.cc.swp Sum_Of_Numbers
######################################
