# CS121-File-IO-Project
```
##Algorithm 

```
1. Import Libaries 
    - import iostream to print output 
    - import fstream to read the file 
    - import sstream for stringstream
    - import string to sort the text

2. main() 

3. file input stream based on the date file. 
    - create infile for the file input stream 
    - ss to seperate the data
    - create data which work with the numbers
    - open data.csv using inFile.open()

4. create int variables 
    - intA = store first number 
    - intB = store second number
    - total = the sum of the numbers

5. create string variables  
    - sIntA and SintB = to store temporarily number as strings. 
    - text = to store the words 
    - Currentline = one full line from the file 

6. read file one line at a time
    - while getline(infile, currentLine)
    - read one line at a time until file is finished

7. seperate data
    - clear ss and data
    - currentLine into ss
    - getline(ss, sintA, ',') for first value
    - getline(ss, sintB, ,') for second value 
    - getline(ss, text) for words

8. converting the numbers
    - sIntA into data
    - sIntA into intA
    - clear data 
    - sIntB into data 
    - sIntB into intB 

9. add two numbers
    - total = intA + intB
  
10. print the text total number of times
    - loop from 0 to total 
    - print text and space each time 
    - print new line when loop is done

11. repeat
    - go back and read next line 
    - repeat until file is finished 

12. close the file 
    - inFile.close()

13. End main() 
```

## Pushing the Envelope
```
I created a seperate file called "extrapushing.cpp" for the extra pushing beyond the basics 
i kept this seperate so it does not change my original "File-IO.cpp". 
I added this new feature because it will check if data.csv is avaiable before the code try to read it. If the file is missing or cannnot be opened then the program will give an error message and stops. 
I put this feature in 'extrapushing.cpp' so it does not affect my original File-IO.cpp and it stays the same. 
```
