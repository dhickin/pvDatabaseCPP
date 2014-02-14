/* exampleDatabase.h */
/**
 * Copyright - See the COPYRIGHT that is included with this distribution.
 * EPICS pvData is distributed subject to a Software License Agreement found
 * in file LICENSE that is included with this distribution.
 */
/**
 * @author mrk
 * @date 2013.07.24
 */
#ifndef EXAMPLEDATABASE_H
#define EXAMPLEDATABASE_H

#include <shareLib.h>

#include <pv/pvDatabase.h>

namespace epics { namespace pvDatabase { 

class epicsShareClass  ExampleDatabase{
public:
    static void create();
};


}}

#endif  /* EXAMPLEDATABASE_H */