//
// Manta - Structural Variant and Indel Caller
// Copyright (c) 2013-2019 Illumina, Inc.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//

/// \file
/// \author Chris Saunders

#include "manta/SVCandidateAssemblyData.hh"

#include <iostream>

std::ostream& operator<<(std::ostream& os, const LargeInsertionInfo& lii)
{
  os << "LargeInsertionInfo: isLeft/Right: " << lii.isLeftCandidate << "/" << lii.isRightCandidate
     << " contigOffset: " << lii.contigOffset << " refOffset: " << lii.refOffset << " score: " << lii.score
     << "\n";
  return os;
}
