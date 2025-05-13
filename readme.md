# Find twist-secure Montgomery and Edwards curves

Copy files from this repository to a working directory, and move into that directory 

Download the MIRACL library and build it and the required applications

	bash script.sh

Build a collection of modular poynomials for the chosen prime *p*, which would typically be of a size somewhere between 160 and 521 bits.

	./modpol -f 5.2^248-1 0 200 -o p52481.pol

This will create a file *p52481.pol*. In this case 200 is the limit which determines how many modular polynomials will be generated. 
As a ball-park figure it should be around 4/5 of the length of *p*. For larger *p* this could take a few hours.

	./montysea -s 6 1 -i p52481.pol

Starting from *A=6* this will keep incrementing *A* by 4 until it finds a twist-secure Montgomery curve y^2=x^3+Ax^2+x mod *p*.

Then wait. Have a coffee. Maybe go to bed and come back in the morning. This could take a while...

When finished this also provisions a twist-secure Edwards curve x^2+y^2=1+Bx^2y^2 mod *p*, with parameter *B=-(A-2)/4*
