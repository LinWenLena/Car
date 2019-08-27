#ifdef WST_H

#ifndef WST_MTX_H
#define WST_MTX_H

/**
* \brief Instead of Mutexes only critical regions (disabling interrupts) are necessary for the OO-RTX.
* \req{RXF-RXF-799}
*
* Mutex functionality is not required, as the OO-RTX does not support preemptive multitasking.
* The OORTX implementation of class WST_MTX only maps basic functionality to interrupt blocking
* which is actually implemented in WSTTarget.
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST_MTX.h 30194 2014-09-30 12:18:33Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/RXF/OORTX/Source/C/WST_MTX.h $
*
**/

/*****************************************************************************
 *
 * This file belongs to the Willert Software Tools RXF Product:  
 * EA_C_OORTX_Keil_ARM_MCB1700_Dev (2014-11-14).
 * Copyright (c) 2011, Willert Software Tools GmbH.
 *
 * For detailed information about this product see release info file:
 * C:/Willert/EA_C_OORTX_Keil_ARM_MCB1700_Dev/ReleaseInfo.txt
 *
 *****************************************************************************/



#define WST_RXF_RUNNING_START_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

/** \brief This operation needs to be called before a critical region in code begins, which may not be interrupted in any case.
  * \req{RXF-RXF-805} \req{RXF-RXF-806}
  *
  * The OORTX does not have multiple tasks running, but maps WST_MTX_enterCriticalRegion() to the interrupt blocking
  * operation WSTTarget_enterCriticalRegion() to make sure the execution of the code in a critical region is not interrupted.
  *
  * This shall only be used carefully as interrupt reaction times are influenced.
  */
#define WST_MTX_enterCriticalRegion()		WSTTarget_enterCriticalRegion(void)


/**
  * \brief Leave a section of code, which must not be interrupted.
  * \req{RXF-RXF-808} \req{RXF-RXF-809}
  *
  * The OORTX does not have multiple tasks running, but maps WST_MTX_exitCriticalRegion() to the interrupt blocking
  * operation WSTTarget_exitCriticalRegion() to make sure the original interrupt configuration, which was active when
  * entering the critical section, is restored.
  *
  * This shall only be used carefully as interrupt reaction times are influenced.
  */
#define WST_MTX_exitCriticalRegion()		WSTTarget_exitCriticalRegion(void)

#define WST_RXF_RUNNING_STOP_SEC_CODE_FAST
/* @MISRA_19.1=OFF PD-0001: The design requires memory type macro inclusions to be located in multiple locations within files */
#include "WSTMemoryTypes.h"
/* @MISRA_19.1=ON */

#endif /* of WST_MTX_H */

#endif /* WST_H */
