//  ###########################################################################
//  Copyright 2011-2015, 2024 by Raymond Wan (rwan.work@gmail.com)
//    https://github.com/rwanwork/QScores-Archiver
//
//  This file is part of QScores-Archiver.
//
//  QScores-Archiver is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public License
//  as published by the Free Software Foundation; either version
//  3 of the License, or (at your option) any later version.
//
//  QScores-Archiver is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with QScores-Archiver; if not, see
//  <http://www.gnu.org/licenses/>.
//  ###########################################################################


/*******************************************************************/
/*!
    \file testing.hpp
    Test functions QScoresSingle class.
*/
/*******************************************************************/


#ifndef TESTING_HPP
#define TESTING_HPP


void TestRescaling (string str);
void TestDifferenceCoding (string str);
void TestRemapping (string str);
void TestQSBinning (string str, enum e_QSCORES_MAP mode, unsigned int bin);
void TestEPBinning (string str, enum e_QSCORES_MAP mode, unsigned int bin);
void TestQSBinningDifferenceCoding (string str, enum e_QSCORES_MAP mode, unsigned int bin);
  
#endif

