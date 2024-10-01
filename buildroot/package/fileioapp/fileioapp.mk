FILEIOAPP_VERSION = 1.0
FILEIOAPP_SOURCE = $(FILEIOAPP_VERSION).tar.gz
FILEIOAPP_SITE = http://example.com/fileioapp
FILEIOAPP_LICENSE = MIT

# Specify where the source code is located
FILEIOAPP_SRC = src/main.c src/input.txt

$(eval $(generic-package))
