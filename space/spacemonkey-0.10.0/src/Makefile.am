# Author: Edson Alves - edsonalves@unb.br
# Date: 21/12/2012

# Library description
lib_LTLIBRARIES = libitem.la

# Programs excluded from instalation
#noinst_PROGRAMS = atendimento
bin_PROGRAMS = spacemonkey

# Library flags
libitem_la_LDFLAGS = -static

# Library sources
libitem_la_SOURCES = inimigo.cpp jogador.cpp SDL_Tela.cpp tela.cpp SDL_Mapa.cpp mapa.cpp fase.cpp animacao.cpp menuEventos.cpp menus.cpp jogo.cpp horda.cpp SDL_Sprite.cpp chipanze1.cpp chipanze2.cpp orangotango.cpp gorila1.cpp gorila2.cpp

# Libraries needed to build our library
libitem_la_LIBADD = 

# Program description
spacemonkey_SOURCES =	spacemonkey.cpp

# Libraries needed to build program
spacemonkey_LDADD =	libitem.la -lSDL -lSDL_image

# Include flags
INCLUDES = -I../include -Wall -Wno-long-long -W -pedantic -ansi

