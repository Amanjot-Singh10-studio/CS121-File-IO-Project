#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <string>

int main() { 
	std::ifstream inFile;
       	std::string currentLine; 

	std::stringstream ss; 
	std::stringstream data; 

	int intA; 
	int intB; 
	int total; 

	std::string sIntA; 
	std::string sIntB; 
	std::string text; 
	std::string line; 
	
	inFile.open("data.csv");
	if (!inFile.is_open()) { 
		std::cout << "Error: data.csv could not opened." << std::endl;
		return 1; 
	}	
	while (getline(inFile, currentLine)) {
		ss.clear(); 
		ss.str("");
		
		data.clear(); 
		data.str("");

		ss.str(currentLine);

		getline(ss, sIntA, ','); 
		getline(ss, sIntB, ','); 
		getline(ss, text); 
			
		data.str(sIntA);
	       	data >> intA; 

		data.clear(); 
		data.str(""); 

		data.str(sIntB);
		data >> intB;

		total = intA + intB; 

		for (int i = 0; i < total; i++) { 
			std::cout << text << " "; 
		}	
		std::cout << std::endl; 
	}
	inFile.close();
	return 0; 
} 	

