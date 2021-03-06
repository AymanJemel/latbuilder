// This file is part of Lattice Builder.
//
// Copyright (C) 2012-2016  Pierre L'Ecuyer and Universite de Montreal
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "latbuilder/GenSeq/CyclicGroup.h"
#include "latbuilder/TextStream.h"

#include <iostream>

using namespace LatBuilder;
using TextStream::operator<<;

//! [main]
typedef GenSeq::CyclicGroup<Compress::NONE> WholeSeq;
typedef GenSeq::CyclicGroup<Compress::SYMMETRIC> HalfSeq;

void displaySeq(int base, int power)
{
   std::cout << "lattice size: " << base << "^" << power << std::endl;
   std::cout << "    whole sequence: " << WholeSeq(base, power) << std::endl;
   std::cout << "     half sequence: " << HalfSeq(base, power) << std::endl;
}

int main()
{
   displaySeq(7, 1);
   displaySeq(2, 3);
   displaySeq(3, 2);
   return 0;
}
//! [main]
