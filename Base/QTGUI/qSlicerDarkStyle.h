/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Johan Andruejol, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerDarkStyle_h
#define __qSlicerDarkStyle_h

// Slicer includes
#include "qSlicerStyle.h"
//#include "qSlicerBaseQTGUIExport.h"

class Q_SLICER_BASE_QTGUI_EXPORT qSlicerDarkStyle : public qSlicerStyle
{
  Q_OBJECT
public:
  /// Superclass typedef
  typedef qSlicerStyle Superclass;

  /// Constructors
  qSlicerDarkStyle();
  ~qSlicerDarkStyle() override;

  QPalette standardPalette() const override;
};

#endif
