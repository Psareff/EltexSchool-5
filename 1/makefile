static_linkage_static_lib : 
	clang -c mod_div.c
	ar rc libmoddiv.a mod_div.o
	ranlib libmoddiv.a
	clang static_linkage_static_lib.c -L. -lmoddiv -o static_linkage_static_lib
	./static_linkage_static_lib
static_linkage_dynamic_lib : 
	clang -fPIC -c mod_div.c
	clang -shared -o libmoddivdyn.so mod_div.o
	clang -c static_linkage_dynamic_lib.c
	clang static_linkage_dynamic_lib.o -L. -lmoddivdyn -o static_linkage_dynamic_lib
	sudo ldconfig
	./static_linkage_dynamic_lib
dynamic_linkage_dynamic_lib : 
	clang -fPIC -c mod_div.c
	clang -shared -o libmoddivdyn.so mod_div.o
	clang dynamic_linkage_dynamic_lib.c -o dynamic_linkage_dynamic_lib -ldl
	./dynamic_linkage_dynamic_lib
clear: 
	rm libmoddiv.a mod_div.o static_linkage_static_lib \
	static_linkage_dynamic_lib.o static_linkage_dynamic_lib libmoddivdyn.so \
	dynamic_linkage_dynamic_lib
	clear
	