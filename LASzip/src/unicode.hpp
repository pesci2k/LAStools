/*
===============================================================================

  FILE:  unicode.hpp
  
  CONTENTS:
  
    Contains the conversion functions used to manage Unicode encoding.

  PROGRAMMERS:

    francesco.sepic@e-laser.it

===============================================================================
*/
#ifndef UNICODE_HPP
#define UNICODE_HPP

#include <string>

#if defined(_WIN32) && defined(UNICODE)
std::string narrow(const wchar_t* s);
std::string narrow(const std::wstring& s);
std::wstring widen(const char* s);
std::wstring widen(const std::string& s);
#else
std::string narrow(const char* s);
std::string narrow(const std::string& s);
std::string widen(const char* s);
std::string widen(const std::string& s);
#endif

#endif
