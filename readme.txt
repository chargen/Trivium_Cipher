In this projects, we first write a golden model by Microsoft Visual Studio 2012 in C language.
For key and nonce we first write two functions to randomly generated them, then for ISE implementation
convenience we fixed them as showed in the header file trivium_conf.h.
We demonstrate the golden model by a random plain file and save the key stream and cipher text. 
In ISE we do the same thing as in golden model, simulation shows that the results are the same as in MS VC2012.
We use a register named 'error' to sum the difference between golden model and verilog module, and show it 
on the seven-segment. The result is 0 which is exactly as expected.