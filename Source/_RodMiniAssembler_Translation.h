/* GPL-2.0 License, see LICENCE_GPL-2.0.txt */
/* https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html */
/*
 * _RodMiniAssembler_Translation.c - header for Rod's Mini Assembler functions
 * Copyright (C) 2020 Rodrigo Amaral  <rodrigo_amaral01@outlook.com>
 */

#ifndef _RODMINIASSEMBLER_TRANSLATION_H
#define _RODMINIASSEMBLER_TRANSLATION_H

#include <inttypes.h>
#include <stdio.h>

#define N_BYTES_BIN 8 /* The number of binary bytes printed by PrintBinFile_Bin() */
#define N_BYTES_HEX 32 /* The number of hex bytes printed by PrintBinFile_Hex() */

void 	_RodMiniAssembler_NibbleBinaryPrint(uint8_t num);  		 /* Prints in binary, the lower nibble of num */
void 	_RodMiniAssembler_NibbleHexPrint(uint8_t num);			 /* Prints in hex, the lower nibble of num */
void    _RodMiniAssembler_ByteBinaryPrint(uint8_t num);			 /* Prints in binary, the num */
void    _RodMiniAssembler_ByteHexPrint(uint8_t num);			 /* Prints in hexadecimal, the num */
uint8_t _RodMiniAssembler_HexToBin(char c);						 /* Converts a hex char, to its binary representation */
uint8_t _RodMiniAssembler_HexToByte(char c1, char c2); 			 /* Returns a byte representing the binary of two hex chars. c1, MS Nibble. c2, LS Nibble.*/

uint8_t _RodMiniAssembler_InvalidCharsCheck(char* file_name);	 /* Checks file for any invalid chars, these are non hex chars, besides spaces, newlines and tabs. Returns 0 if successful, 1 otherwise */
void 	_RodMiniAssembler_PrintBinFile_Bin(char* file_name);	 /* Prints binary file to stdout, in bin form */
void 	_RodMiniAssembler_PrintBinFile_Hex(char* file_name); 	 /* Prints binary file to stdout, in hex form */
uint8_t _RodMiniAssembler_MakeBinFile(char* source_file_string, char *output_file_string); /* makes a binary file, from a source file written in hex. Returns 0 if successful, 1 otherwise */


#endif /* _RODMINIASSEMBLER_TRANSLATION_H */