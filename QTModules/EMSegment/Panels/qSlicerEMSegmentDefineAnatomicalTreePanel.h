#ifndef __qSlicerEMSegmentDefineAnatomicalTreePanel_h
#define __qSlicerEMSegmentDefineAnatomicalTreePanel_h 

// CTK includes
#include <ctkPimpl.h>

// EMSegment includes
#include "qSlicerEMSegmentWidget.h"

#include "qSlicerEMSegmentModuleExport.h"

class qSlicerEMSegmentDefineAnatomicalTreePanelPrivate;

class Q_SLICER_QTMODULES_EMSEGMENT_EXPORT qSlicerEMSegmentDefineAnatomicalTreePanel :
    public qSlicerEMSegmentWidget
{ 
  Q_OBJECT

public:

  typedef qSlicerEMSegmentWidget Superclass;
  qSlicerEMSegmentDefineAnatomicalTreePanel(QWidget *newParent=0);
  
  virtual void printAdditionalInfo();

  virtual void setup();

private:
  CTK_DECLARE_PRIVATE(qSlicerEMSegmentDefineAnatomicalTreePanel);
};

#endif
