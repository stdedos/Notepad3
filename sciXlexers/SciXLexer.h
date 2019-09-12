﻿#pragma once
#ifndef _SCIXLEXER_H_
#define _SCIXLEXER_H_

#define SCLEX_AHKL  200
#define SCLEX_TOML  201
#define SCLEX_CSV   202

// -----------------------------------------------------------------------------
// !!!!! ADD  Lexer Linkage in:  scintilla\src\Catalogue.cxx  !!!!!
// -----------------------------------------------------------------------------

#define SCE_AHKL_NEUTRAL 0
#define SCE_AHKL_IDENTIFIER 1
#define SCE_AHKL_COMMENTDOC 2
#define SCE_AHKL_COMMENTLINE 3
#define SCE_AHKL_COMMENTBLOCK 4
#define SCE_AHKL_COMMENTKEYWORD 5
#define SCE_AHKL_STRING 6
#define SCE_AHKL_STRINGOPTS 7
#define SCE_AHKL_STRINGBLOCK 8
#define SCE_AHKL_STRINGCOMMENT 9
#define SCE_AHKL_LABEL 10
#define SCE_AHKL_HOTKEY 11
#define SCE_AHKL_HOTSTRING 12
#define SCE_AHKL_HOTSTRINGOPT 13
#define SCE_AHKL_HEXNUMBER 14
#define SCE_AHKL_DECNUMBER 15
#define SCE_AHKL_VAR 16
#define SCE_AHKL_VARREF 17
#define SCE_AHKL_OBJECT 18
#define SCE_AHKL_USERFUNCTION 19
#define SCE_AHKL_DIRECTIVE 20
#define SCE_AHKL_COMMAND 21
#define SCE_AHKL_PARAM 22
#define SCE_AHKL_CONTROLFLOW 23
#define SCE_AHKL_BUILTINFUNCTION 24
#define SCE_AHKL_BUILTINVAR 25
#define SCE_AHKL_KEY 26
#define SCE_AHKL_USERDEFINED1 27
#define SCE_AHKL_USERDEFINED2 28
#define SCE_AHKL_ESCAPESEQ 30
#define SCE_AHKL_ERROR 31


#define SCE_TOML_DEFAULT 0
#define SCE_TOML_KEYWORD 1
#define SCE_TOML_COMMENT 2
#define SCE_TOML_SECTION 3
#define SCE_TOML_KEY 4
#define SCE_TOML_ASSIGNMENT 5
#define SCE_TOML_VALUE 6
#define SCE_TOML_NUMBER 7
#define SCE_TOML_DATETIME 8
#define SCE_TOML_STR_BASIC 9
#define SCE_TOML_STR_LITERAL 10
#define SCE_TOML_PARSINGERROR 11


#define SCE_CSV_DEFAULT 0
#define SCE_CSV_COLUMN_0 1
#define SCE_CSV_COLUMN_1 2
#define SCE_CSV_COLUMN_2 3
#define SCE_CSV_COLUMN_3 4
#define SCE_CSV_COLUMN_4 5
#define SCE_CSV_COLUMN_5 6
#define SCE_CSV_COLUMN_6 7
#define SCE_CSV_COLUMN_7 8
#define SCE_CSV_COLUMN_8 9
#define SCE_CSV_COLUMN_9 10

#endif //_SCIXLEXER_H_
