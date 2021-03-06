/**********
This library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)

This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**********/
// "liveMedia"
// Copyright (c) 1996-2005 Live Networks, Inc.  All rights reserved.
// Common routines for opening/closing named input files
// C++ header

#ifndef _INPUT_FILE_HH
#define _INPUT_FILE_HH

#include <UsageEnvironment.hh>
#include <stdio.h>

FILE* OpenInputFile(UsageEnvironment& env, char const* fileName);

void CloseInputFile(FILE* fid);

unsigned GetFileSize(char const* fileName, FILE* fid);
    // 0 means zero-length, unbounded, or unknown

#endif
