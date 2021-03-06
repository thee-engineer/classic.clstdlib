/*
   Copyright 2018-2019 Alexandru-Paul Copil

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/


/* bool.h - Boolean type

Provide a typdef of unsigned char to bool and two constants TRUE and FALSE
which are 1 and 0.

*/


#ifndef _INC_BOOL_H
#define _INC_BOOL_H

typedef unsigned char bool;

static const bool TRUE  = (0==0);
static const bool FALSE = (0!=0);

#endif
