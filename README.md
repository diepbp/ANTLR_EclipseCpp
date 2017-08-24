An example of using ANTLR in Eclipse CPP in Ubuntu.
The input grammar is SMT-LIB2. You can find lexer and parser rules of SMT-LIB2 [here](http://smt-front-end.readthedocs.io/en/latest/smtv2.html)

Build Eclipse-Cpp project
---------------------------------
- Download the complete ANTLR Java binaries file [in the official page](http://www.antlr.org/download.html).
- Download ANTLR runtime example in [ANTLR Github](https://github.com/antlr/antlr4/tree/master/runtime/Cpp)
- Follow the following instruction
```
    cd /runtime/Cpp (this is where the ANTLR runtime example is located)
    mkdir build && mkdir run && cd build
    cmake .. -DANTLR_JAR_LOCATION=full/path/to/ANTLR_Java_binaries.jar -DWITH_DEMO=True
    make
    make install
```

- Clone this git
```
	git clone https://github.com/diepbp/ANTLR_EclipseCpp.git
```	

- Import the Eclipse project, or manually create it by adding files. If you manually create a project, remember to add include directory as well as library name and library directory. Normally, their values are "/usr/local/include/antlr4-runtime/", "antlr4-runtime" and "/usr/local/lib/" respectively.

Contact/ Bug Report
---------------------------------
Feedback, questions or bug reports should go to [Bui Phi Diep](bui.phi-diep@it.uu.se).