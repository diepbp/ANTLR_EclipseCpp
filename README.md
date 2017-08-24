An example of using ANTLR in Eclipse CPP in Ubuntu.
The input grammar is SMT-LIB2. You can find lexer and parser rules of SMT-LIB2 [here](http://smt-front-end.readthedocs.io/en/latest/smtv2.html).

Build Eclipse-Cpp project
---------------------------------
- Download the complete ANTLR Java binaries file [in the ANTLR official page](http://www.antlr.org/download.html).
- Download ANTLR runtime example in [ANTLR Github](https://github.com/antlr/antlr4/tree/master/runtime/Cpp).
- Follow the following instruction:
```
    cd /runtime/Cpp (this is where the ANTLR runtime example is located)
    mkdir build && mkdir run && cd build
    cmake .. 
    make
    make install
```

- Clone this git:
```
	git clone https://github.com/diepbp/ANTLR_EclipseCpp.git
```	

- Import the Eclipse project, or manually create it by adding files. If you manually create a project, remember to add include directory as well as library name and library directory. Normally, their values are "/usr/local/include/antlr4-runtime/", "antlr4-runtime" and "/usr/local/lib/" respectively.

Build your own parser
---------------------------------
- Find/create your lexer and parser rules. Assuming that the lexer and parser file are yourLexer.g4 and yourParser.l4.
- Update generate.sh in the /runtime/Cpp/demo folder. Note that your antlr jar file, yourLexer.g4 and yourParser.l4 should be in this folder.

```
	LOCATION=antlr-4.7-complete.jar
	java -jar $LOCATION -Dlanguage=Cpp -listener -visitor -o generated/ -package antlrcpptest yourLexer.g4 yourParser.g4 
	java -jar $LOCATION -Dlanguage=Cpp -listener -visitor -o generated/ -package antlrcpptest -XdbgST yourLexer.g4 yourParser.g4
	java -jar $LOCATION -Dlanguage=Java -listener -visitor -o generated/ -package antlrcpptest yourLexer.g4 yourParser.g4
```
- Run generate.sh
- Add all generated files to the project above. Remove the old files from the project, except main.cpp. You also need to modify main.cpp.


Contact
---------------------------------
Questions should go to [Bui Phi Diep](bui.phi-diep@it.uu.se).