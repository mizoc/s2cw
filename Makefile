s2cw: str2morse.cpp
	g++ -o s2cw str2morse.cpp

clean:
	rm -rf s2cw

install:
	cp s2cw /usr/local/bin/s2cw

uninstall:
	rm -rf /usr/local/bin/s2cw

.PHONY: clean install uninstall
