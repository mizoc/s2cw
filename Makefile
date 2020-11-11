all: s2cw cw2s

s2cw: str2morse.cpp
	g++ -o s2cw str2morse.cpp

cw2s: morse2str.cpp
	g++ -o cw2s morse2str.cpp

clean:
	rm -rf s2cw cw2s

install:
	cp s2cw /usr/local/bin/s2cw
	cp cw2s /usr/local/bin/cw2s

uninstall:
	rm -rf /usr/local/bin/s2cw
	rm -rf /usr/local/bin/cw2s

.PHONY: clean install uninstall
