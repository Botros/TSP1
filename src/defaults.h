/*!
 * \file defaults.h
 * \author Copyright (C) 2007-2010 Lёppa <contacts[at]oleksii[dot]name>
 *
 *  $Id$
 *  $URL$
 *
 * \brief Contains TSPSG defaults.
 *
 *  <b>TSPSG: TSP Solver and Generator</b>
 *
 *  This file is part of TSPSG.
 *
 *  TSPSG is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  TSPSG is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with TSPSG.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEFAULTS_H
#define DEFAULTS_H

//! Default number of cities
#define DEF_NUM_CITIES 5

//////// GENERAL
//! Default for "Automatically resize rows and columns to their contents"
#define DEF_AUTOSIZE true
/*!
 * \def DEF_USE_NATIVE_DIALOGS
 * \brief Default for "Use native file dialog".
 */
#ifdef Q_OS_WINCE
	#define DEF_USE_NATIVE_DIALOGS false
#else
	#define DEF_USE_NATIVE_DIALOGS true
#endif // Q_OS_WINCE
//! Default for "Save main window state and position"
#define DEF_SAVEPOS false

//////// TASK
//! Default for "Accuracy of the fractional values"
#define DEF_FRACTIONAL_ACCURACY 2
//! Default minimum for random numbers generation
#define DEF_RAND_MIN 1
//! Default maximum for random numbers generation
#define DEF_RAND_MAX 10
//! Default for "Fractional random values"
#define DEF_FRACTIONAL_RANDOM false

//////// OUTPUT
//! Default for "Show solution steps' matrices for every solution step"
#define DEF_SHOW_MATRIX true
//! Default for "Show or hide solution steps' matrices based on number of cities in the task"
#define DEF_USE_SHOW_MATRIX_LIMIT true
//! Default for "Maximum number of cities to show solution steps' matrices"
#define DEF_SHOW_MATRIX_LIMIT 15
//! Default for "Scroll to the end of output after solving"
#define DEF_SCROLL_TO_END true
/*!
 * \def DEF_FON_FAMILY
 * \brief Default font name.
 */
#ifdef Q_OS_WINCE
	#define DEF_FONT_FAMILY "Tahoma"
#else
	#define DEF_FONT_FAMILY "Courier New"
#endif
//! Default font size
#define DEF_FONT_SIZE 10
//! Default font color
#define DEF_FONT_COLOR Qt::black

#endif // DEFAULTS_H
