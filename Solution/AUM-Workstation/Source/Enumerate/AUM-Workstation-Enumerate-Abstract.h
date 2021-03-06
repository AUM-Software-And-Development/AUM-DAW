//Written by Eric Dee.

#pragma once

#ifndef AUM_WORKSTATION_BUILD_H
#include "../AUM-Workstation-Build.h"
#define AUM_WORKSTATION_BUILD_H
#endif // !AUM_WORKSTATION_BUILD_H

#ifndef AUM_WORKSTATION_IO_H
#include <IO/AUM-Workstation-IO.h>
#define AUM_WORKSTATION_IO_H
#endif // !AUM_WORKSTATION_IO_H

#ifndef AUM_WORKSTATION_LOG_H
#include "../Log/AUM-Workstation-Log.h"
using namespace AUM_Workstation_Log;
#define AUM_WORKSTATION_LOG_H
#endif // !AUM_WORKSTATION_LOG_H

namespace AUM_Workstation_Enumerate {

    /// <summary>
    /// Class base to runtime enums; allows enum inheritance to be local, and mapping.
    /// </summary>
    class AUMWorkstationBuildMacro AUMWorkstationEnumerateAbstract {

    public:
        //Field
        const char* Name;
        map<int, string> Map;

        //Member
        enum AUMEnum {
            AUM_WORKSTATION_NULL = 0
        };
        
        //Method
        virtual map<int, string> MakeMap(string strings[], int elementCount) const;

        //Ctr
        AUMWorkstationEnumerateAbstract();
        AUMWorkstationEnumerateAbstract(const char* name, string strings[], int elementCount);
    };

}