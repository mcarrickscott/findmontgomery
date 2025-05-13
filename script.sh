git clone https://github.com/miracl/miracl.git
cp miracl/source/* .
cp miracl/source/curve/* .
cp miracl/include/* .
cp miracl/lib/* .
bash linux64
g++ -O2 modpol.cpp ps_zzn.cpp zzn.cpp big.cpp miracl.a -o modpol
g++ -O2 montysea.cpp poly.cpp polymod.cpp polyxy.cpp big.cpp zzn.cpp ecn.cpp crt.cpp miracl.a -o montysea

